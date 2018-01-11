#include "display.hpp"
#include "../graphics/palette.hpp"

display::display() {

    int scale = 4;

    // Initialize SDL and the display object
    init(scale * GB_DISP_WIDTH, scale * GB_DISP_HEIGHT, false);

}

display::~display() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    // Delete the array and the texture
    delete[] pixels;
    SDL_DestroyTexture(texture);

    std::cout << "display::clean - Done cleaning." << std::endl;
}

/**
 *  void setArrayPixelColor(Uint32 * pixel, Uint8 r, Uint8 g, Uint8 b) 
 * 
 *  Set the color of the pixel in the pre-texture pixel array to the specified r, g, and b values
 *  r, g, and b values are 0-255. Alpha is set so there's no transparency
 **/
void setArrayPixelColor(Uint32 * pixel, uint8_t r, uint8_t g, uint8_t b) {
    // ARGB Format. No Alpha and shift r, g, and b to where they need to be
    *pixel = (255 << 24) | (r << 16) | (g << 8) | b;
}

/**
 *  void setArrayPixelColor(Uint32 * pixel, color c) 
 * 
 *  Set the color of the pixel in the pre-texture pixel array to the specified color values
 *  the color struct is defined in the graphics/palette.hpp 
 *  Not sure which of these methods to use. First day of defining things.
 **/
void setArrayPixelColor(Uint32 * pixel, color c) {
    *pixel = (255 << 24) | (c.b << 16) | (c.g << 8) | c.b;
}

void display::init(int width, int height, bool fullscreen) {

    int flags = SDL_RENDERER_PRESENTVSYNC; 
    if(fullscreen) {
        flags = flags | SDL_WINDOW_FULLSCREEN;
    }

    // Create the window
    window = SDL_CreateWindow("Parker's Shitty C++ Gameboy Emulator", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, flags);
    if(window)  std::cout << "display::init - Window initialized" << std::endl;

    // Create the renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    if(renderer) {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        std::cout << "display::init - Renderer initialized" << std::endl;
    }

    // Set up the texture we are rendering to
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, GB_DISP_WIDTH, GB_DISP_HEIGHT);
    pixels = new Uint32[GB_DISP_TOTAL_PIXELS];
    
    frameCount = 0;

    // Set the pixel array to all white or a test pattern
    for(int y = 0; y < GB_DISP_HEIGHT; y++) {
        for(int x = 0; x < GB_DISP_WIDTH; x++) {
            // Test Pattern
            setArrayPixelColor(&pixels[y * GB_DISP_WIDTH + x], y, GB_DISP_WIDTH-x, x);

            // White
            // setArrayPixelColor(&pixels[y * GB_DISP_WIDTH + x], 0, 0, 0);
        }
    }
}

void display::testUpdateScreen() {
    for(int y = 0; y < GB_DISP_HEIGHT; y++) {
        for(int x = 0; x < GB_DISP_WIDTH; x++) {
            setArrayPixelColor(&pixels[y * GB_DISP_WIDTH + x], 0, 0, abs((frameCount%511)-255));
        }
    }
}

/**
 *  void drawFrame()
 * 
 *  Copies the current pixels array to a texture and renders the texture to the screen
 * 
 **/
void display::drawFrame() {
    frameCount++;
    
    // testUpdateScreen();
    
    // SDL_RenderClear(renderer);  // Clearing the renderer
    SDL_UpdateTexture(texture, NULL, pixels, GB_DISP_WIDTH * sizeof(Uint32));  // Update the SDL Texture with pixel array
    SDL_RenderCopy(renderer, texture, NULL, NULL);  // Pass the texture to the renderer
    SDL_RenderPresent(renderer);    // Render the texture
}
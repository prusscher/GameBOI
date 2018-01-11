#ifndef display_hpp
#define display_hpp
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class display{

    public:
        const int GB_DISP_WIDTH = 160;
        const int GB_DISP_HEIGHT = 144;
        const int GB_DISP_TOTAL_PIXELS = GB_DISP_WIDTH * GB_DISP_HEIGHT;
        
    public:
        display();
        ~display();
        void drawFrame();

    private:
        SDL_Window *    window;
        SDL_Renderer *  renderer;
        SDL_Texture *   texture;
        Uint32 *        pixels;
        int frameCount;

    private:
        void init(int width, int height, bool fullscreen);    // Initialize the window
        void testUpdateScreen();
};

#endif
#include "frontend.hpp"

frontend::frontend() {

}

frontend::~frontend() {
    // Destroy the display
    disp->~display();

    SDL_Quit();
}

void frontend::init() {
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
        shouldExit = false;
    else
        shouldExit = true;

    // Create a pointer to the display and initialize it
    disp = new display();

    // Do keypad and sound stuff here at some point
}

display* frontend::getDisplay() {
    return disp;
}

void frontend::update() {
    // SDL Event stuff goes here
    SDL_Event event;
    SDL_PollEvent(&event);
    if(event.type == SDL_QUIT)
        shouldExit = true;

    // Keypad stuff goes here
}

bool frontend::shouldProgramExit() {
    return shouldExit;
}
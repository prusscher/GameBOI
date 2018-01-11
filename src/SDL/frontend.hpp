#ifndef frontend_hpp
#define frontend_hpp
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "display.hpp"

class frontend {
    public:
        frontend();
        ~frontend();
        
        void init();
        
        display* getDisplay();
        // Keypad here
        // Sound Here
        
        void update();
        bool shouldProgramExit();
    private:
        display * disp;

        bool shouldExit;
};

#endif
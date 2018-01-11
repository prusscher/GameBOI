#ifndef system_hpp
#define system_hpp

#include "SDL/frontend.hpp"
#include <string>

#include "MMU.hpp"

class System {

    public:
        System(frontend * f, std::string path);
        ~System();
        void run();

    private:
        frontend * s_frontend;

        // This is where basically everything goes
        MMU * mmu;
};

#endif
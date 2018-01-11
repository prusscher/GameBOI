#include "System.hpp"

#include "MMU.hpp"

System::System(frontend * f, std::string path) {
    
    // Set the pointer to the frontend
    s_frontend = f;
    
    // Load the rom here

    // Setup the main components of the System
    mmu = new MMU();
}

System::~System() {

    // Deconstruct the system components
    mmu->~MMU();
}

void System::run() {

    while(true) {

        // CPU Step here
        
        // Dummy update till the CPU is ok and good to go
        s_frontend->update();
        s_frontend->getDisplay()->drawFrame();

        if(s_frontend->shouldProgramExit()) {
            break;
        }
    }

}
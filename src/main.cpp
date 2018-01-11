#include "SDL/frontend.hpp"
#include "System.hpp"

int main(int argv, const char* argc[]) {

    // Initialize the frontend of the application
    frontend * m_frontend = new frontend();
    m_frontend->init();

    // Create an instance of a gameboy
    System * gameboy = new System(m_frontend, "Dummy");

    // Start the gameboy
    gameboy->run();

    // Destroy our garbage
    gameboy->~System();
    m_frontend->~frontend();

}
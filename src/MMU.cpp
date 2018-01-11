#include "MMU.hpp"
#include <cstring>

MMU::MMU() {
    // Set all of the RAM to 0
    memset(ram, (uint8_t)0, 0x10000 * sizeof(uint8_t));

    // This is where the defaults for all of the ram stuff should go when I eventtually get around to it
}

MMU::~MMU() {
    delete[] ram;
}

void MMU::writeByte(uint16_t addr, uint8_t data) {
    
}

void MMU::writeShort(uint16_t addr, uint16_t data) {

}

uint8_t MMU::readByte(uint16_t addr) {
    
    // This isnt right yet, we've gotta check where is beig read and whether it can be accessed 
    // (eg. reading/writing OAM while an OAM Transfer is in process)
    
    return (uint8_t)(ram[addr]);
}

uint16_t MMU::readShort(uint16_t addr) {
    
    return (uint16_t)(ram[addr] << 8 | ram[addr]); 
}

void MMU::step(unsigned int ticks) {

}
#ifndef mmu_hpp
#define mmu_hpp

#include <stdint.h>

// Cartridge Header Location
const uint16_t CART_HEADER_START    = 0x0100;
const uint16_t CART_HEADER_END      = 0x014F;

// Cartridge Rom Locations
const uint16_t CART_ROM_B0_START    = 0x0150;   // Bank 0
const uint16_t CART_ROM_B0_END      = 0x3FFF;

const uint16_t CART_ROM_BX_START    = 0x4000;   // Banks 1-7 (Switchable for CGB)
const uint16_t CART_ROM_BX_END      = 0x7FFF;

// Character RAM
const uint16_t CHAR_RAM_START       = 0x8000;
const uint16_t CHAR_RAM_END         = 0x97FF;

// Background character maps
const uint16_t BG_MAP_0_START       = 0x9800;
const uint16_t BG_MAP_0_END         = 0x9BFF;

const uint16_t BG_MAP_1_START       = 0x9C00;
const uint16_t BG_MAP_1_END         = 0x9FFF;

// RAM on the cartridge if it is available
const uint16_t CART_RAM_START       = 0xA000;
const uint16_t CART_RAM_END         = 0xBFFF;

// Internal RAM Banks
const uint16_t GB_RAM_B0_START      = 0xC000;   // Bank 0
const uint16_t GB_RAM_B0_END        = 0xCFFF;

const uint16_t GB_RAM_BX_START      = 0xD000;   // Bank 1-7 (Switchable for CGB)
const uint16_t GB_RAM_BX_END        = 0xDFFF;

// Echo RAM LUL
const uint16_t ECHO_RAM_START       = 0xE000;
const uint16_t ECHO_RAM_END         = 0xFDFF;

// OAM Locations
const uint16_t OAM_START            = 0xFE00;
const uint16_t OAM_END              = 0xFE9F;

// Unusuable RAM
const uint16_t UNUSABLE_RAM_START   = 0xFEA0;
const uint16_t UNUSABLE_RAM_END     = 0xFEFF;

// Hardware IO Locations
const uint16_t HW_IO_START          = 0xFF00;
const uint16_t HW_IO_END            = 0xFF7F;

// Zero PAGE
const uint16_t ZERO_PAGE_START      = 0xFF80;
const uint16_t ZERO_PAGE_END        = 0xFFFE;

// Interrupt Flags Location
const uint16_t INTERRUPT_FLAG       = 0xFFFF;


class MMU {
    
    public:
        MMU();
        ~MMU();

        void writeByte(uint16_t addr, uint8_t data);
        void writeShort(uint16_t addr, uint16_t data);
        uint8_t readByte(uint16_t addr);
        uint16_t readShort(uint16_t addr);

        void step(unsigned int ticks);
    private:
        uint8_t ram[0x10000];
};

#endif
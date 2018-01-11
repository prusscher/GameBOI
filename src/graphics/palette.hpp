#ifndef palette_hpp
#define palette_hpp

#include <stdint.h>

struct color {
    uint8_t r, g, b;
};

struct palette {
    color c0, c1, c2, c3;
};

const palette default_palette = {{255, 255, 255}, {192, 192, 192}, {96, 96, 96}, {0, 0, 0}};

#endif
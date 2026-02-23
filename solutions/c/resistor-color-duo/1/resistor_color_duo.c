#include "resistor_color_duo.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h>

uint16_t color_code(resistor_band_t colors[]){
    int res = 10*colors[0] + colors[1];
    return res;
}
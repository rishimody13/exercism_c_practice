#include "resistor_color.h"
#include <stdint.h>
uint16_t color_code(int color)
{
    return color;
}
resistor_band_t resistor_colours[] = {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE
};

resistor_band_t *colors(void)
{
    return resistor_colours;
}

#include "space_age.h"
#include <stdio.h>
#include <stdint.h>
float numbers[] = {0.2408467, 0.61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846,164.7913};
float age(planet_t planet, int64_t seconds) {
    if (planet < 0 || planet > 7) {
        return -1.0f;
    }
    float earth_years = (float)seconds / 31557600.0f;
    return earth_years / numbers[planet];
}
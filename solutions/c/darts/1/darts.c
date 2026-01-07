#include "darts.h"
#include <stdint.h>
#include <stdio.h>

uint8_t score(coordinate_t xy)
{
    double d = (xy.x * xy.x) + (xy.y * xy.y);
    if (d<= 1.0){
        return 10;
    } 
    else if (d <= 25.0){
        return 5;
    } 
    else if (d <=100.0) {
        return 1;
    }
    else{
        return 0;
    }
}

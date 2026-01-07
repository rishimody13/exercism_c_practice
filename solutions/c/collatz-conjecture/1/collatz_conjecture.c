#include "collatz_conjecture.h"
int steps (int start){
    int n = 0;
    int val = start;
    if (start <= 0) {
        return -1;
    }
    while (val!=1){
        if (val%2 == 0){
            n++;
            val = val/2;
        }
        else{
            n++;
            val = (3*val) + 1;
        }
    }
    return n;
}
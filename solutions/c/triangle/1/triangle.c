#include "triangle.h"
#include <stdbool.h>

static bool is_valid(triangle_t s) {
    return s.a > 0 && s.b > 0 && s.c > 0 &&
           s.a + s.b > s.c &&
           s.a + s.c > s.b &&
           s.b + s.c > s.a;
}

bool is_equilateral(triangle_t s) {
    return is_valid(s) &&
           s.a == s.b &&
           s.b == s.c;
}

bool is_isosceles(triangle_t s) {
    return is_valid(s) &&
           (s.a == s.b ||
            s.b == s.c ||
            s.a == s.c);
}

bool is_scalene(triangle_t s) {
    return is_valid(s) &&
           s.a != s.b &&
           s.b != s.c &&
           s.a != s.c;
}

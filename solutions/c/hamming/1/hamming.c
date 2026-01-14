#include "hamming.h"
#include <string.h>
int compute(const char *lhs, const char *rhs){
    if (strlen(lhs) != strlen(rhs)){
        return -1;
    }
    if (lhs == rhs){
        return 0;
    }
    int length = strlen(lhs);
    int dif = 0;
    for (int i = 0; i < length; i++) {
        if (lhs[i] != rhs[i]){
            dif ++;
        }
    }
    return dif;
}
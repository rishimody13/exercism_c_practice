#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>
char *to_rna(const char *dna){
    int len = strlen(dna);
    char *rna = malloc(len + 1);
    for (int i = 0; i < len; i++){
        if (dna[i] == 'G'){
            rna[i] = 'C';
        }
        else if (dna[i] == 'C'){
            rna[i] = 'G';
        }
        if (dna[i] == 'T'){
            rna[i] = 'A';
        }
        if (dna[i] == 'A'){
            rna[i] = 'U';
        }
    }
    rna[len] = '\0';
    return rna;
}
#include "pangram.h"
#include <string.h>
#include <ctype.h>
bool is_pangram(const char *sentence){
    if ((sentence == NULL) || (strlen(sentence)<26)) {  
        return false;
    }
    int len = strlen(sentence);
    bool alphabet[26] = { false };
    int count = 0;
    for (int i = 0; i < len; i++) {
        char ch = tolower(sentence[i]);
        
        if (ch >= 'a' && ch <= 'z') { 
            int index = ch - 'a'; 

            if (index >= 0 && index < 26 && !alphabet[index]) {
                alphabet[index] = true;
                count++; 
        }
    }
    
}
    return count==26;
}
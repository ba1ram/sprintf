#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, size_t n){
    char* cdest = (char*)dest;
    const char* csrc = (const char*)src;
    
    for (size_t i = 0; i < n; ++i) {
        cdest[i] = csrc[i];
    }
    
    return dest;
}

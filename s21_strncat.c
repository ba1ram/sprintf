#include "s21_string.h"


char *s21_strncat(char *dest, const char *src, size_t n){
    size_t dest_size = 0;
    while(dest[dest_size] != '\0') ++dest_size;
    dest_size += 1;

    for(size_t i = 0; i < n && src[i] != '\0'; ++i){
        dest[dest_size + i] = src[i];
    }


    return dest;
}
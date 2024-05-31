#include "s21_string.h"

void *s21_memset(void *str, int c, size_t n){
    char* get_str = str;

    for(size_t i = 0; i < n; ++i){
        get_str[i] = c;
    }

    return get_str;
}
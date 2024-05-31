#include "s21_string.h"

void *s21_memchr(const void *str, int c, size_t n){
    const char* get_str = str;
    void* ret_value = NULL;

    for(size_t i = 0; i < n; ++i){
        if(get_str[i] == c){
            ret_value = (void *) get_str + i;
            i = n;
        }
    }
    return ret_value;
}
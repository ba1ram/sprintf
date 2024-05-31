#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, size_t n){
    const char* get_str1 = str1;
    const char* get_str2 = str2;
    int ret_value = 0;
    for(size_t i = 0; i < n; ++i){

        if(get_str1[i] != get_str2[i]){
            ret_value = get_str1[i] - get_str2[i];
            i = n;
        }

    }
    return ret_value;
}
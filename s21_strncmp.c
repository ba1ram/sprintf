#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, size_t n){
    int result = 0;
    size_t i = 0;
    for (; i < n; ++i) {
        if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0') {
            result = str1[i] - str2[i];
            break;
        }
    }
    return result;
}
#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
    char *last = NULL;
    while (*str != '\0') {
        if (*str == c) {
            last = (char *)str;
        }
        str++;
    }
    if (c == '\0') {
        return (char *)str;
    }
    return last;
}
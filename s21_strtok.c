#include "s21_string.h"


char *s21_strtok(char *str, const char *delim) {
    static char *last = NULL;
    char *token;
    if (str == NULL)
        str = last;

    while (*str != '\0' && s21_strchr(delim, *str) != NULL)
        str++;

    if (*str == '\0') {
        last = NULL;
        return NULL;
    }

    token = str;
    str = str + 1;
    while (*str != '\0' && s21_strchr(delim, *str) == NULL)
        str++;

    if (*str != '\0') {
        *str = '\0';
        last = str + 1;
    } else {
        last = NULL;
    }

    return token;
}
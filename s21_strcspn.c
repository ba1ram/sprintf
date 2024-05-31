#include "s21_string.h"


size_t s21_strcspn(const char *str1, const char *str2)
{
    const char *ptr1 = str1;
    size_t count = 0;

    while (*ptr1 != '\0') {
        const char *ptr2 = str2;
        while (*ptr2 != '\0') {
            if (*ptr1 == *ptr2) {
                return count;
            }
            ++ptr2;
        }
        ++ptr1;
        ++count;
    }

    return count;
}
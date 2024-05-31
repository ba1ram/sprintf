#include "s21_string.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct PresentFormats {
    int minus;
    int plus;
    int space;
    int grid;
    int null;

    int wightSize;

    int precisionSize;

    int h_lenght;
    int l_lenght;
    int L_lenght;
}Formats;


int arg_count(const char *format){
    int count = 0;

    for(int i = 0; format[i] != '\0'; i++){
        if(format[i] == '%') count++;
    }

    return count;
}

// -- // -- //
void char_to_string(char c, char str[]){
    str[0] = c;
    str[1] = '\0';
}
void int_to_string(int n, char str[]) {
    int i = 0;
    int is_negative = 0;

    // Обработка нуля
    if (n == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    // Обработка отрицательных чисел
    if (n < 0) {
        is_negative = 1;
        n = -n;
    }

    // Преобразование числа в строку
    while (n != 0) {
        str[i++] = (n % 10) + '0';
        n = n / 10;
    }

    // Добавление минуса для отрицательных чисел
    if (is_negative) {
        str[i++] = '-';
    }

    str[i] = '\0';

    // Переворот строки
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void float_to_string(double n, char str[], int afterpoint) {
    // Преобразование целой части
    int ipart = (int)n;

    // Преобразование дробной части
    double fpart = n - (double)ipart;
    int fpart_int = 0;
    double multiplier = 1.0;

    // Умножаем на 10 afterpoint раз
    for (int i = 0; i < afterpoint; i++) {
        multiplier *= 10.0;
    }
    fpart_int = (int)(fpart * multiplier + 0.5); // Добавляем 0.5 для округления

    // Преобразование целой части в строку
    int_to_string(ipart, str);

    // Добавление точки
    int len = strlen(str);
    str[len] = '.';
    str[len + 1] = '\0';

    // Преобразование дробной части в строку
    char fpart_str[20];
    int_to_string(fpart_int, fpart_str);

    // Добавление нулей в начало дробной части, если нужно
    int fpart_len = strlen(fpart_str);
    for (int i = 0; i < afterpoint - fpart_len; i++) {
        str[len + 1 + i] = '0';
    }
    str[len + 1 + afterpoint - fpart_len] = '\0';

    // Добавление дробной части в строку
    strcat(str, fpart_str);
}
// -- // -- //

// == // == //
void c_spec(va_list arg, char* str){
    char c = va_arg(arg, int);  
    char schar[100];
    char_to_string(c, schar);

    strncat(str, schar, strlen(schar));
}
void d_spec(va_list arg, char* str){
    int d = va_arg(arg, int);
    char sint[100];
    int_to_string(d, sint);
    strncat(str, sint, strlen(sint));
}
void i_spec(va_list arg, char* str){
    int i = va_arg(arg, int);
    char sint[100];
    int_to_string(i, sint);

    //i = strtol(sint, NULL, 0);
    strncat(str, sint, strlen(sint));
}
void e_spec(va_list arg, char* str){                                                // Схож с E_spec(), требуется вынести схожие части в одну фукнкцияю
    int count = 0;  
    double e = va_arg(arg, double); // Объявляем e как double
    char ending[100] = "";
    if(e > 1){
        while (e > 10) {
            e /= 10;
            count++;
        }
        strncpy(ending, "e+0", 3);
    }else{
        while (e < 1) {
            e *= 10;
            count++;
        }
        strncpy(ending, "e-0", 3);
    }

    char sfloat[100];
    char sint[100];
    float_to_string((float)e, sfloat, 6); // Преобразуем e в float перед передачей в функцию
    int_to_string(count, sint);
    strncat(ending, sint, strlen(sint));
    strncat(sfloat, ending, strlen(ending));
    strncat(str, sfloat, strlen(sfloat));
}
void E_spec(va_list arg, char* str){
    int count = 0;
    double e = va_arg(arg, double); // Объявляем e как double
    char ending[100] = "";
    if(e > 1){
        while (e > 10) {
            e /= 10;
            count++;
        }
        strncpy(ending, "E+0", 3);
    }else{
        while (e < 1) {
            e *= 10;
            count++;
        }
        strncpy(ending, "E-0", 3);
    }

    char sfloat[100];
    char sint[100];
    float_to_string((float)e, sfloat, 6); // Преобразуем e в float перед передачей в функцию
    int_to_string(count, sint);

    strncat(ending, sint, strlen(sint));
    strncat(sfloat, ending, strlen(ending));
    strncat(str, sfloat, strlen(sfloat));
}
void f_spec(va_list arg, char* str){
    double f = va_arg(arg, double);
    char sfloat[100] = "";

    float_to_string(f, sfloat, 6);
    strncat(str, sfloat, strlen(sfloat));
}

void wight_logic(char* str, int wight){
    char space[10000] = "";
    for(int i = 0; i < wight - 1; i++){
        space[i]=' ';
    }
    strncat(str, space, strlen(space));
}



int flags_choose(Formats *presFormats, const char** format){
    int foundFlag = 0;
    switch (**format){
        case '-':
        {
            foundFlag = 1;
            presFormats->minus = 1;
            break;
        }
        case '+':
        {
            foundFlag = 1;
            presFormats->plus = 1;
            break;
        }
        case ' ':
        {
            foundFlag = 1;
            presFormats->space = 1;
            break;
        }
        case '#':
        {
            foundFlag = 1;
            presFormats->grid = 1;
            break;
        }
        case '0':
        {
            foundFlag = 1;
            presFormats->null = 1;
            break;
        }
    }
    if(foundFlag == 1){
        (*format)++;
        flags_choose(presFormats, format);
    } 
    return foundFlag;
}

void precision_defining(Formats *presFormats, const char** format){
    if(**format == '.'){
        char precision[1000] = "";
        (*format)++;

        for(int i = 0; isdigit(**format); i++){
            precision[i] = **format;
            (*format)++;   
        }
        presFormats->precisionSize = atoi(precision);
    }
}

void widht_defining(Formats *presFormats, const char** format){
    char wightStr[1000] = "";

    for(int i = 0; isdigit(**format); i++){
        wightStr[i] = **format;
        (*format)++;   
    }
    presFormats->wightSize = atoi(wightStr);
}

void spec_choose(va_list arg, char* str, const char* format, Formats *presFormats){
    switch (*format){
        case 'c':
        {
            if(!presFormats->minus) wight_logic(str, presFormats->wightSize);  //||
            c_spec(arg, str);
            if(presFormats->minus) wight_logic(str, presFormats->wightSize); //||
            break;
        }
        case 'd':
        {
            d_spec(arg, str);
            break;
        }
        case 'i':
        {
            i_spec(arg, str);
            break;
        }
        case 'e':
        {
            e_spec(arg, str);
            break;
        }
        case 'E':
        {
            E_spec(arg, str);
            break;
        }
        case 'f':
        {   
            f_spec(arg, str);
            break;
        }
    }
}
// == // == //


int s21_sprintf(char *str, const char *format, ...){
    Formats presFormats = {0};
    int argCount = arg_count(format);
    int count = 0;

    va_list arg;
    va_start(arg, format);
    char *str_ptr = str;


    while(*format != '\0'){

        if(*format == '%'){
            format++;
            flags_choose(&presFormats, &format);
            widht_defining(&presFormats, &format);
            precision_defining(&presFormats, &format);
            spec_choose(arg, str_ptr, format, &presFormats);
        }
        else{
            char bf[] = "v";
            bf[0] = *format;
            strncat(str, bf, sizeof(bf));
        }

        format++;
        if(presFormats.wightSize > 0) count+= presFormats.wightSize - 1;
        count++;
    }


    va_end(arg);

    return count;
}
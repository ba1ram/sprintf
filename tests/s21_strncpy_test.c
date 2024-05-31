#include "s21_string_test.h"

START_TEST(s21_strncpy_test1)
{
    const char *src = "Hello";
    char dest[10];
    size_t n = 5;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST

START_TEST(s21_strncpy_test2)
{
    const char *src = "Hello";
    char dest[10];
    size_t n = 3;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST

START_TEST(s21_strncpy_test3)
{
    const char *src = "Hello";
    char dest[10];
    size_t n = 10;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST

START_TEST(s21_strncpy_test4)
{
    const char *src = "Hello";
    char dest[10];
    size_t n = 2;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST

START_TEST(s21_strncpy_test5)
{
    const char *src = "";
    char dest[10];
    size_t n = 5;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST

START_TEST(s21_strncpy_test6)
{
    const char *src = "Hello";
    char dest[10] = "World";
    size_t n = 3;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST

START_TEST(s21_strncpy_test7)
{
    const char *src = "Hello";
    char dest[10];
    size_t n = 0;

    ck_assert_str_eq(s21_strncpy(dest, src, n), strncpy(dest, src, n));
}
END_TEST


Suite* s21_strncpy_suite(void){
    Suite* s;
    TCase* s21_strncpy_testing;

    s = suite_create("strncpy");
    s21_strncpy_testing = tcase_create("All tests");

    tcase_add_test(s21_strncpy_testing, s21_strncpy_test1);
    tcase_add_test(s21_strncpy_testing, s21_strncpy_test2);
    tcase_add_test(s21_strncpy_testing, s21_strncpy_test3);
    tcase_add_test(s21_strncpy_testing, s21_strncpy_test4);
    tcase_add_test(s21_strncpy_testing, s21_strncpy_test5);
    tcase_add_test(s21_strncpy_testing, s21_strncpy_test6);
    tcase_add_test(s21_strncpy_testing, s21_strncpy_test7);


    
    
    suite_add_tcase(s, s21_strncpy_testing);

    return s;

}
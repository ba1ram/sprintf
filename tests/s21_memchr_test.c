#include "s21_string_test.h"

//checkmk


START_TEST(s21_memchr_test1)
{
    const char* str = "Hello World!";
    int c = 'W';
    size_t n = strlen(str);

    ck_assert_str_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test2)
{
    const char* str = "Hello World!";
    int c = 'H';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test3)
{
    const char* str = "Hello World!";
    int c = '!';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test4)
{
    const char* str = "";
    int c = 'A';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test5)
{
    const char* str = "Hello World!";
    int c = 'X';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test6)
{
    const char* str = "Hello World!";
    int c = 'l';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test7)
{
    const char* str = "Hello World!";
    int c = 'W';
    size_t n = 0;

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test8)
{
    const char* str = "Hello\0World!";
    int c = '\0';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(s21_memchr_test9)
{
    int arr[] = {1, 2, 3, 4, 5};
    int c = 3;

    ck_assert_ptr_eq(s21_memchr(arr, c, sizeof(arr)), memchr(arr, c, sizeof(arr)));
}
END_TEST

START_TEST(s21_memchr_test10)
{
    const char* str = "Hello World!";
    int c = ' ';
    size_t n = strlen(str);

    ck_assert_ptr_eq(s21_memchr(str, c, 10), memchr(str, c, 6));
}
END_TEST



Suite *s21_memchr_suite(void)
{
    Suite *s;
    TCase *s21_memchr_testing;

    s = suite_create("memchr");

    s21_memchr_testing = tcase_create("All tests");

    tcase_add_test(s21_memchr_testing, s21_memchr_test1);
    tcase_add_test(s21_memchr_testing, s21_memchr_test2);
    tcase_add_test(s21_memchr_testing, s21_memchr_test3);
    tcase_add_test(s21_memchr_testing, s21_memchr_test4);
    tcase_add_test(s21_memchr_testing, s21_memchr_test5);
    tcase_add_test(s21_memchr_testing, s21_memchr_test6);
    tcase_add_test(s21_memchr_testing, s21_memchr_test7);
    tcase_add_test(s21_memchr_testing, s21_memchr_test8);
    tcase_add_test(s21_memchr_testing, s21_memchr_test9);
    tcase_add_test(s21_memchr_testing, s21_memchr_test10);

    suite_add_tcase(s, s21_memchr_testing);

    return s;
}






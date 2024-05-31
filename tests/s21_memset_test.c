#include "s21_string_test.h"

START_TEST(s21_memset_test1)
{
    int arr[5];
    int c = 0;
    int n = sizeof(arr);

    ck_assert_str_eq(s21_memset(arr, c, n), memset(arr, c, n));
}
END_TEST

START_TEST(s21_memset_test2)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int c = 0;
    int n = 0;

    ck_assert_str_eq(s21_memset(arr, c, n), memset(arr, c, n));
}
END_TEST

START_TEST(s21_memset_test3)
{
    char str[10] = "Hello";
    int c = 0;
    int n = 10;

    ck_assert_str_eq(s21_memset(str, c, n), memset(str, c, n));
}
END_TEST

START_TEST(s21_memset_test4)
{
    char str[10];
    int n = sizeof(str);

    ck_assert_str_eq(s21_memset(str, '*', n), memset(str, '*', n));
}
END_TEST

START_TEST(s21_memset_test5)
{
    unsigned char byte_arr[5];

    ck_assert_str_eq(s21_memset(byte_arr, 0xFF, sizeof(byte_arr)), memset(byte_arr, 0xFF, sizeof(byte_arr)));
}
END_TEST

START_TEST(s21_memset_test6)
{
    int part_arr[5] = {1, 2, 3, 4, 5};
    
    ck_assert_str_eq(s21_memset(part_arr + 1, 0, 3 * sizeof(int)), memset(part_arr + 1, 0, 3 * sizeof(int)));
}
END_TEST

START_TEST(s21_memset_test7)
{
    int big_arr[10000];

    ck_assert_str_eq(s21_memset(big_arr, 0xAB, sizeof(big_arr)), memset(big_arr, 0xAB, sizeof(big_arr)));
}
END_TEST


Suite* s21_memset_suite(void)
{
    Suite* s;
    TCase* s21_memset_testing;

    s = suite_create("memset");
    s21_memset_testing = tcase_create("All tests");

    tcase_add_test(s21_memset_testing, s21_memset_test1);
    tcase_add_test(s21_memset_testing, s21_memset_test2);
    tcase_add_test(s21_memset_testing, s21_memset_test3);
    tcase_add_test(s21_memset_testing, s21_memset_test4);
    tcase_add_test(s21_memset_testing, s21_memset_test5);
    tcase_add_test(s21_memset_testing, s21_memset_test6);
    tcase_add_test(s21_memset_testing, s21_memset_test7);


    suite_add_tcase(s, s21_memset_testing);
    return s;
}
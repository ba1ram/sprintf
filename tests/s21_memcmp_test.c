#include "s21_string_test.h"

START_TEST(s21_memcmp_test1)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr1);

    ck_assert_int_eq(s21_memcmp(arr1, arr2, n), memcmp(arr1, arr2, n));
}
END_TEST

START_TEST(s21_memcmp_test2)
{
    char* str1 = NULL;
    char* str2 = NULL;
    size_t n = 0;

    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));

}
END_TEST

START_TEST(s21_memcmp_test3)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 5, 4};
    size_t n = sizeof(arr1);

    ck_assert_int_eq(s21_memcmp(arr1, arr2, n), memcmp(arr1, arr2, n));

}
END_TEST

START_TEST(s21_memcmp_test4)
{
    char* str1 = "Hello";
    char* str2 = "World";
    size_t n = strlen(str1);

    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));

}
END_TEST

START_TEST(s21_memcmp_test5)
{
    char* str1 = "";
    char* str2 = "";
    size_t n = strlen(str1);

    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));

}
END_TEST

START_TEST(s21_memcmp_test6)
{
    char* str1 = "abcdef";
    char* str2 = "abcDEF";
    size_t n = strlen(str1);

    ck_assert_int_eq(s21_memcmp(str1 + 3, str2 + 3, 3), memcmp(str1 + 3, str2 + 3, 3));

}
END_TEST

START_TEST(s21_memcmp_test7)
{
    char* str1 = "";
    char* str2 = "Hello";

    ck_assert_int_eq(s21_memcmp(str1, str2, 1), memcmp(str1, str2, 1));

}
END_TEST

START_TEST(s21_memcmp_test8)
{
    char* str1 = "Test\0string";
    char* str2 = "string";
    size_t n = strlen(str1);

    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));

}
END_TEST

START_TEST(s21_memcmp_test9)
{
    char* str1 = "Text for conducting program tests.";
    char* str2 = "for";
    size_t n = strlen(str1);

    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));

}
END_TEST

START_TEST(s21_memcmp_test10)
{
    char* str1 = "Text for conducting program tests.";
    char* str2 = "tests";
    size_t n = 0;

    ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));

}
END_TEST


Suite *s21_memcmp_suite(void)
{
    Suite *s;
    TCase *s21_memcmp_testing;

    s = suite_create("memcmp");

    s21_memcmp_testing = tcase_create("All tests");

    tcase_add_test(s21_memcmp_testing, s21_memcmp_test1);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test2);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test3);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test4);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test5);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test6);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test7);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test8);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test9);
    tcase_add_test(s21_memcmp_testing, s21_memcmp_test10);
    
    suite_add_tcase(s, s21_memcmp_testing);


    return s;
}
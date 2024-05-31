#include "s21_string_test.h"

START_TEST(s21_memcpy_test1)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int n = sizeof(arr1);

    ck_assert_str_eq(s21_memcpy(arr2, arr1, n), memcpy(arr2, arr1, n));
}
END_TEST

START_TEST(s21_memcpy_test2)
{
    int arr1[0];
    int arr2[] = {1, 2, 3, 4, 5};
    int n = 0;

    ck_assert_str_eq(s21_memcpy(arr2, arr1, n), memcpy(arr2, arr1, n));
}
END_TEST

START_TEST(s21_memcpy_test3)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr);

    ck_assert_str_eq(s21_memcpy(arr, arr, n), memcpy(arr, arr, n));
}
END_TEST

START_TEST(s21_memcpy_test4)
{
    int src[] = {1, 2, 3, 4, 5};
    int dest[3];
    int n = sizeof(int) * 3;

    ck_assert_str_eq(s21_memcpy(dest, src, n), memcpy(dest, src, n));
}
END_TEST

START_TEST(s21_memcpy_test5)
{
    int dest[] = {1, 2, 3, 4, 5};
    int src[] = {1, 2, 3, 4, 5};
    int n = 0;

    ck_assert_str_eq(s21_memcpy(dest, src, n), memcpy(dest, src, n));
}
END_TEST

START_TEST(s21_memcpy_test6)
{
    char* dest = "Hello, World!";
    char* src = "";
    int n = 0;

    ck_assert_str_eq(s21_memcpy(dest, src, n), memcpy(dest, src, n));
}
END_TEST

START_TEST(s21_memcpy_test7)
{
    char dest[20];
    char* src = "Hello, World!";
    int n = strlen(src) + 1;

    ck_assert_str_eq(s21_memcpy(dest, src, n), memcpy(dest, src, n));
}
END_TEST

START_TEST(s21_memcpy_test8)
{
    struct {
        int num;
        char name[10];
    } src_struct[] = {{1, "John"}, {2, "Doe"}, {3, "Alice"}};
    struct {
        int num;
        char name[10];
    } dest_struct[3];

    int n = sizeof(src_struct);

    ck_assert_str_eq(s21_memcpy(dest_struct, src_struct, n), memcpy(dest_struct, src_struct, n));
}
END_TEST




Suite *s21_memcpy_suite(void){
    Suite* s;
    TCase* s21_memcpy_testing;

    s = suite_create("memcpy");

    s21_memcpy_testing = tcase_create("All tests");


    tcase_add_test(s21_memcpy_testing, s21_memcpy_test1);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test2);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test3);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test4);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test5);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test6);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test7);
    tcase_add_test(s21_memcpy_testing, s21_memcpy_test8);
    
    suite_add_tcase(s, s21_memcpy_testing);


    return s;
}
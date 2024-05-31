#include "s21_string_test.h"


START_TEST(s21_strtok_test1)
{
    char str[] = "Hello, World!";
    const char *delim = ", ";
    char *expected_result = strtok(str, delim);

    ck_assert_str_eq(s21_strtok(str, delim), expected_result);
}
END_TEST

START_TEST(s21_strtok_test2)
{
    char str[] = "Hello, World!";
    const char *delim = "o";
    char *expected_result = strtok(str, delim);

    ck_assert_str_eq(s21_strtok(str, delim), expected_result);
}
END_TEST

START_TEST(s21_strtok_test3)
{
    char str[] = "Hello, World!";
    const char *delim = "l";
    char *expected_result = strtok(str, delim);

    ck_assert_str_eq(s21_strtok(str, delim), expected_result);
}
END_TEST

START_TEST(s21_strtok_test4)
{
    char str[] = "Hello, World!";
    const char *delim = "xyz";
    char *expected_result = strtok(str, delim);

    ck_assert_str_eq(s21_strtok(str, delim), expected_result);
}
END_TEST

START_TEST(s21_strtok_test5)
{
    char str[] = "Hello, World!";
    const char *delim = "";
    char *expected_result = strtok(str, delim);

    ck_assert_str_eq(s21_strtok(str, delim), expected_result);
}
END_TEST

START_TEST(s21_strtok_test6)
{
    char str[] = "Hello, World!";
    const char *delim = "!";
    char *expected_result = strtok(str, delim);

    ck_assert_str_eq(s21_strtok(str, delim), expected_result);
}
END_TEST

START_TEST(s21_strtok_test7)
{
    char str[] = "";
    const char *delim = ",";
    char *expected_result = strtok(str, delim);

    ck_assert_ptr_eq(s21_strtok(str, delim), expected_result);
}
END_TEST




Suite* s21_strtok_suite(void){

    Suite* s;
    TCase* s21_strtok_testing;

    s = suite_create("strtok");
    s21_strtok_testing = tcase_create("All tests");

    tcase_add_test(s21_strtok_testing, s21_strtok_test1);
    tcase_add_test(s21_strtok_testing, s21_strtok_test2);
    tcase_add_test(s21_strtok_testing, s21_strtok_test3);
    tcase_add_test(s21_strtok_testing, s21_strtok_test4);
    tcase_add_test(s21_strtok_testing, s21_strtok_test5);
    tcase_add_test(s21_strtok_testing, s21_strtok_test6);
    tcase_add_test(s21_strtok_testing, s21_strtok_test7);


    suite_add_tcase(s, s21_strtok_testing);

    return s;

}
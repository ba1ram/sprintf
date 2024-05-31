#include "s21_string_test.h"


START_TEST(s21_strncmp_test1)
{
    const char *s1 = "Hello";
    const char *s2 = "Hello";
    size_t n = 5;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test2)
{
    const char *s1 = "Hello";
    const char *s2 = "Hell";
    size_t n = 5;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test3)
{
    const char *s1 = "Hello";
    const char *s2 = "He";
    size_t n = 2;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test4)
{
    const char *s1 = "Hello";
    const char *s2 = "Hella";
    size_t n = 5;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test5)
{
    const char *s1 = "";
    const char *s2 = "";
    size_t n = 0;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test6)
{
    const char *s1 = "Hello";
    const char *s2 = "Hella";
    size_t n = 4;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test7)
{
    const char *s1 = "Hello";
    const char *s2 = "Hella";
    size_t n = 6;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

START_TEST(s21_strncmp_test8)
{
    const char *s1 = "Hello";
    const char *s2 = "Hella";
    size_t n = 0;

    ck_assert_int_eq(s21_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
END_TEST

Suite* s21_strncmp_suite(void){

    Suite* s;
    TCase* s21_strncmp_testing;

    s = suite_create("strncmp");
    s21_strncmp_testing = tcase_create("All tests");

    tcase_add_test(s21_strncmp_testing, s21_strncmp_test1);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test2);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test3);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test4);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test5);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test6);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test7);
    tcase_add_test(s21_strncmp_testing, s21_strncmp_test8);


    
    
    suite_add_tcase(s, s21_strncmp_testing);

    return s;

}
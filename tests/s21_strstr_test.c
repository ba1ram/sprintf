#include "s21_string_test.h"


START_TEST(s21_strstr_test1)
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test2)
{
    const char *haystack = "Hello, World!";
    const char *needle = "Hello";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test3)
{
    const char *haystack = "Hello, World!";
    const char *needle = "lo";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test4)
{
    const char *haystack = "Hello, World!";
    const char *needle = "foo";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test5)
{
    const char *haystack = "";
    const char *needle = "Hello";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test6)
{
    const char *haystack = "Hello, World!";
    const char *needle = "";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test7)
{
    const char *haystack = "Hello, World!";
    const char *needle = "!";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test8)
{
    const char *haystack = "Hello, World!";
    const char *needle = "ello";
    char *expected_result = strstr(haystack, needle);

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test9)
{
    const char *haystack = "Hello, World!";
    const char *needle = "H";

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST

START_TEST(s21_strstr_test10)
{
    const char *haystack = "Hello, World!";
    const char *needle = "d!";
    char *expected_result = strstr(haystack, needle);

    ck_assert_ptr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
}
END_TEST



Suite* s21_strstr_suite(void){

    Suite* s;
    TCase* s21_strstr_testing;

    s = suite_create("strstr");
    s21_strstr_testing = tcase_create("All tests");

    tcase_add_test(s21_strstr_testing, s21_strstr_test1);
    tcase_add_test(s21_strstr_testing, s21_strstr_test2);
    tcase_add_test(s21_strstr_testing, s21_strstr_test3);
    tcase_add_test(s21_strstr_testing, s21_strstr_test4);
    tcase_add_test(s21_strstr_testing, s21_strstr_test5);
    tcase_add_test(s21_strstr_testing, s21_strstr_test6);
    tcase_add_test(s21_strstr_testing, s21_strstr_test7);
    tcase_add_test(s21_strstr_testing, s21_strstr_test8);
    tcase_add_test(s21_strstr_testing, s21_strstr_test9);
    tcase_add_test(s21_strstr_testing, s21_strstr_test10);


    
    
    suite_add_tcase(s, s21_strstr_testing);

    return s;

}
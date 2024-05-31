#include "s21_string_test.h"


START_TEST(s21_strlen_test1)
{
    const char *str = "Hello, World!";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST

START_TEST(s21_strlen_test2)
{
    const char *str = "";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST

START_TEST(s21_strlen_test3)
{
    const char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST

START_TEST(s21_strlen_test4)
{
    const char *str = "1234567890";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST

START_TEST(s21_strlen_test5)
{
    const char *str = "abcdefghijklmnopqrstuvwxyz";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST

START_TEST(s21_strlen_test6)
{
    const char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST

START_TEST(s21_strlen_test7)
{
    const char *str = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t expected_len = strlen(str);

    ck_assert_int_eq(s21_strlen(str), expected_len);
}
END_TEST



Suite* s21_strlen_suite(void){

    Suite* s;
    TCase* s21_strlen_testing;

    s = suite_create("strlen");
    s21_strlen_testing = tcase_create("All tests");

    tcase_add_test(s21_strlen_testing, s21_strlen_test1);
    tcase_add_test(s21_strlen_testing, s21_strlen_test2);
    tcase_add_test(s21_strlen_testing, s21_strlen_test3);
    tcase_add_test(s21_strlen_testing, s21_strlen_test4);
    tcase_add_test(s21_strlen_testing, s21_strlen_test5);
    tcase_add_test(s21_strlen_testing, s21_strlen_test6);
    tcase_add_test(s21_strlen_testing, s21_strlen_test7);


    
    
    suite_add_tcase(s, s21_strlen_testing);

    return s;

}
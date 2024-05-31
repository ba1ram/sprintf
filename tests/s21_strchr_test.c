#include "s21_string_test.h"

START_TEST(s21_strchr_test1)
{
    const char *str = "Hello, World!";
    int c = ',';

    ck_assert_str_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test2)
{
    const char *str = "Hello, World!";
    int c = 'z';

    ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test3)
{
    const char *str = "";
    int c = 'a';

    ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test4)
{
    const char *str = "Hello";
    int c = '\0';

    ck_assert_str_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test5)
{
    const char *str = "apple";
    int c = 'a';

    ck_assert_str_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test6)
{
    const char *str = "apple";
    int c = 'e';

    ck_assert_str_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test7)
{
    const char *str = "banana";
    int c = 'n';

    ck_assert_str_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(s21_strchr_test8)
{
    const char *str = "hello, world!";
    int c = 'o';

    ck_assert_str_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST




Suite* s21_strchr_suite(void){

    Suite* s;
    TCase* s21_strchr_testing;

    s = suite_create("strchr");
    s21_strchr_testing = tcase_create("All tests");

    tcase_add_test(s21_strchr_testing, s21_strchr_test1);
    tcase_add_test(s21_strchr_testing, s21_strchr_test2);
    tcase_add_test(s21_strchr_testing, s21_strchr_test3);
    tcase_add_test(s21_strchr_testing, s21_strchr_test4);
    tcase_add_test(s21_strchr_testing, s21_strchr_test5);
    tcase_add_test(s21_strchr_testing, s21_strchr_test6);
    tcase_add_test(s21_strchr_testing, s21_strchr_test7);
    tcase_add_test(s21_strchr_testing, s21_strchr_test8);


    
    
    suite_add_tcase(s, s21_strchr_testing);

    return s;

}
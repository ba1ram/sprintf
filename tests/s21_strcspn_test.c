#include "s21_string_test.h"

START_TEST(s21_strcspn_test1)
{
    const char *str = "Hello, World!";
    const char *reject = ",!";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test2)
{
    const char *str = "Hello, World!";
    const char *reject = "abc";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test3)
{
    const char *str = "";
    const char *reject = ",!";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test4)
{
    const char *str = "Hello, World!";
    const char *reject = "Hello, World!";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test5)
{
    const char *str = "Hello, World!";
    const char *reject = "!";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test6)
{
    const char *str = "Hello, World!";
    const char *reject = "123";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test7)
{
    const char *str = "Hello, World!";
    const char *reject = "o,!";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

START_TEST(s21_strcspn_test8)
{
    const char *str = "Hello, World!";
    const char *reject = "H";

    ck_assert_int_eq(s21_strcspn(str, reject), strcspn(str, reject));
}
END_TEST

Suite* s21_strcspn_suite(void){

    Suite* s;
    TCase* s21_strcspn_testing;

    s = suite_create("strcspn");
    s21_strcspn_testing = tcase_create("All tests");

    tcase_add_test(s21_strcspn_testing, s21_strcspn_test1);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test2);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test3);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test4);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test5);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test6);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test7);
    tcase_add_test(s21_strcspn_testing, s21_strcspn_test8);


    
    
    suite_add_tcase(s, s21_strcspn_testing);

    return s;

}
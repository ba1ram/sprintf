#include "s21_string_test.h"


START_TEST(s21_strrchr_test1)
{
    const char *s = "Hello, World!";
    int c = ',';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST

START_TEST(s21_strrchr_test2)
{
    const char *s = "Hello, World!";
    int c = 'o';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST

START_TEST(s21_strrchr_test3)
{
    const char *s = "Hello, World!";
    int c = '!';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST

START_TEST(s21_strrchr_test4)
{
    const char *s = "Hello, World!";
    int c = 'H';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST

START_TEST(s21_strrchr_test5)
{
    const char *s = "Hello, World!";
    int c = 'x';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST

START_TEST(s21_strrchr_test6)
{
    const char *s = "Hello, World!";
    int c = '\0';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST

START_TEST(s21_strrchr_test7)
{
    const char *s = "";
    int c = 'x';
    char *expected_result = strrchr(s, c);

    ck_assert_ptr_eq(s21_strrchr(s, c), strrchr(s, c));
}
END_TEST




Suite* s21_strrchr_suite(void){

    Suite* s;
    TCase* s21_strrchr_testing;

    s = suite_create("strrchr");
    s21_strrchr_testing = tcase_create("All tests");

    tcase_add_test(s21_strrchr_testing, s21_strrchr_test1);
    tcase_add_test(s21_strrchr_testing, s21_strrchr_test2);
    tcase_add_test(s21_strrchr_testing, s21_strrchr_test3);
    tcase_add_test(s21_strrchr_testing, s21_strrchr_test4);
    tcase_add_test(s21_strrchr_testing, s21_strrchr_test5);
    tcase_add_test(s21_strrchr_testing, s21_strrchr_test6);
    tcase_add_test(s21_strrchr_testing, s21_strrchr_test7);


    
    
    suite_add_tcase(s, s21_strrchr_testing);

    return s;

}
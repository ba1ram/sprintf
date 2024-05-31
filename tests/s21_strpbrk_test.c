#include "s21_string_test.h"




START_TEST(s21_strpbrk_test1)
{
    const char *s = "Hello, World!";
    const char *accept = ",!";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test2)
{
    const char *s = "Hello, World!";
    const char *accept = "abc";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test3)
{
    const char *s = "Hello, World!";
    const char *accept = "123";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test4)
{
    const char *s = "Hello, World!";
    const char *accept = "";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test5)
{
    const char *s = "";
    const char *accept = ",!";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test6)
{
    const char *s = "Hello, World!";
    const char *accept = "xyz";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test7)
{
    const char *s = "Hello, World!";
    const char *accept = "W!";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test8)
{
    const char *s = "Hello, World!";
    const char *accept = "o";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test9)
{
    const char *s = "Hello, World!";
    const char *accept = "abcd";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST

START_TEST(s21_strpbrk_test10)
{
    const char *s = "Hello, World!";
    const char *accept = "d";

    ck_assert_ptr_eq(s21_strpbrk(s, accept), strpbrk(s, accept));
}
END_TEST



Suite* s21_strpbrk_suite(void){
    Suite* s;
    TCase* s21_strpbrk_testing;

    s = suite_create("strpbrk");
    s21_strpbrk_testing = tcase_create("All tests");

    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test1);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test2);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test3);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test4);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test5);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test6);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test7);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test8);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test9);
    tcase_add_test(s21_strpbrk_testing, s21_strpbrk_test10);


    
    
    suite_add_tcase(s, s21_strpbrk_testing);

    return s;

}
#include "s21_string_test.h"

START_TEST(s21_strncat_test1)
{
    char dest1[20] = "Hello";
    char src1[] = "World";

    ck_assert_str_eq(s21_strncat(dest1, src1, 5), strncat(dest1, src1, 5));
}
END_TEST

START_TEST(s21_strncat_test2)
{
    char dest2[20] = "Hello";
    char src2[] = "";

    ck_assert_str_eq(s21_strncat(dest2, src2, 5), strncat(dest2, src2, 5));
}
END_TEST

START_TEST(s21_strncat_test3)
{
    char dest3[20] = "Hello";
    char src3[] = "World";

    ck_assert_str_eq(s21_strncat(dest3, src3, 0), strncat(dest3, src3, 0));
}
END_TEST

START_TEST(s21_strncat_test4)
{
    char dest4[20] = "Hello";
    char src4[] = "World";

    ck_assert_str_eq(s21_strncat(dest4, src4, 3), strncat(dest4, src4, 3));
}
END_TEST

START_TEST(s21_strncat_test5)
{
    char str5[20] = "Hello";

    ck_assert_str_eq(s21_strncat(str5 + 3, str5, 10), strncat(str5 + 3, str5, 10));
}
END_TEST

START_TEST(s21_strncat_test6)
{
    char dest6[20] = "Hello";
    char src6[] = "World!";

    ck_assert_str_eq(s21_strncat(dest6, src6, 6), strncat(dest6, src6, 6));
}
END_TEST

START_TEST(s21_strncat_test7)
{
    char dest7[20] = "";
    char src7[] = "";

    ck_assert_str_eq(s21_strncat(dest7, src7, 1), strncat(dest7, src7, 1)); 
}
END_TEST

START_TEST(s21_strncat_test8)
{
    char dest8[20];
    char src8[] = "World";
    
    ck_assert_str_eq(s21_strncat(dest8, src8, 5), strncat(dest8, src8, 5)); 
}
END_TEST


Suite* s21_strncat_suite(void)
{
    Suite* s;
    TCase* s21_strncat_testing;

    s = suite_create("strncat");
    s21_strncat_testing = tcase_create("All tests");

    tcase_add_test(s21_strncat_testing, s21_strncat_test1);
    tcase_add_test(s21_strncat_testing, s21_strncat_test2);
    tcase_add_test(s21_strncat_testing, s21_strncat_test3);
    tcase_add_test(s21_strncat_testing, s21_strncat_test4);
    tcase_add_test(s21_strncat_testing, s21_strncat_test5);
    tcase_add_test(s21_strncat_testing, s21_strncat_test6);
    tcase_add_test(s21_strncat_testing, s21_strncat_test7);
    tcase_add_test(s21_strncat_testing, s21_strncat_test8);

    suite_add_tcase(s, s21_strncat_testing);

    return s;
}
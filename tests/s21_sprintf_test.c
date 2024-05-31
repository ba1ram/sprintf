#include "s21_string_test.h"


// Тесты для чистого %c //
START_TEST(s21_sprintf_test1)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%c", 'A'), sprintf(stdbuff, "%c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test2)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%c", '\n'), sprintf(stdbuff, "%c", '\n'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test3)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%c", '\t'), sprintf(stdbuff, "%c", '\t'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test4)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "Test - %c", '5'), sprintf(stdbuff, "Test - %c", '5'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test5)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "Test - %c %c%c end.", 'u', '\n', '1'), sprintf(stdbuff, "Test - %c %c%c end.", 'u', '\n', '1'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST
// Тесты для чистого %c // -- end


// Тетсы для '%c' + флаги // - start
START_TEST(s21_sprintf_test6)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%-c", 'u'), sprintf(stdbuff, "%-c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test7)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%20c", 'u'), sprintf(stdbuff, "%20c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test8)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%-20c", 'u'), sprintf(stdbuff, "%-20c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test9)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%1c", 'u'), sprintf(stdbuff, "%1c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test10)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%-1c", 'u'), sprintf(stdbuff, "%-1c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test11)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "% c", 'u'), sprintf(stdbuff, "% c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test12)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    ck_assert_int_eq(s21_sprintf(mybuff, "%-020c", 'u'), sprintf(stdbuff, "%-020c", 'u'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test13)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with width and zero-padding
    ck_assert_int_eq(s21_sprintf(mybuff, "%05c", 'A'), sprintf(stdbuff, "%05c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test14)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with width and plus sign flag
    ck_assert_int_eq(s21_sprintf(mybuff, "%+5c", 'A'), sprintf(stdbuff, "%+5c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test15)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with width and space flag
    ck_assert_int_eq(s21_sprintf(mybuff, "% 5c", 'A'), sprintf(stdbuff, "% 5c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test16)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with width and hash flag
    ck_assert_int_eq(s21_sprintf(mybuff, "%#5c", 'A'), sprintf(stdbuff, "%#5c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test17)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with multiple flags
    ck_assert_int_eq(s21_sprintf(mybuff, "%#-+05c", 'A'), sprintf(stdbuff, "%#-+05c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test18)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with multiple flags and small width
    ck_assert_int_eq(s21_sprintf(mybuff, "%#-+01c", 'A'), sprintf(stdbuff, "%#-+01c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test19)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with only zero-padding
    ck_assert_int_eq(s21_sprintf(mybuff, "%0c", 'A'), sprintf(stdbuff, "%0c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test20)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with precision (although precision does not affect %c)
    ck_assert_int_eq(s21_sprintf(mybuff, "%.5c", 'A'), sprintf(stdbuff, "%.5c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test21)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with field width and precision
    ck_assert_int_eq(s21_sprintf(mybuff, "%5.1c", 'A'), sprintf(stdbuff, "%5.1c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test22)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with negative field width
    ck_assert_int_eq(s21_sprintf(mybuff, "%-5c", 'A'), sprintf(stdbuff, "%-5c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test23)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with negative field width and precision
    ck_assert_int_eq(s21_sprintf(mybuff, "%-5.1c", 'A'), sprintf(stdbuff, "%-5.1c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test24)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with maximum field width
    ck_assert_int_eq(s21_sprintf(mybuff, "%1000c", 'A'), sprintf(stdbuff, "%1000c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

START_TEST(s21_sprintf_test25)
{
    char stdbuff[1000] = "";
    char mybuff[1000] = "";

    // Test with zero field width
    ck_assert_int_eq(s21_sprintf(mybuff, "%0c", 'A'), sprintf(stdbuff, "%0c", 'A'));
    ck_assert_str_eq(mybuff, stdbuff);
}
END_TEST

// Тетсы для '%c' + флаги // - end



TCase* s21_sprintf_c_tests(){

    TCase* s21_sprintf_testing;
    s21_sprintf_testing = tcase_create("\033[31m c spec tests \033[0m");

    tcase_add_test(s21_sprintf_testing, s21_sprintf_test1);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test2);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test3);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test4);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test5);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test6);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test7);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test8);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test9);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test10);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test11);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test12);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test13);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test14);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test15);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test16);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test17);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test18);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test19);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test20);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test21);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test22);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test23);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test24);
    tcase_add_test(s21_sprintf_testing, s21_sprintf_test25);


    return s21_sprintf_testing;
}

Suite *s21_sprintf_suite(void){
    Suite* s;
    s = suite_create("sprintf");

    suite_add_tcase(s, s21_sprintf_c_tests());

    return s;
}
#include <stdlib.h>
#include "s21_string_test.h"




int test_logic(Suite* suite){
    int test_result = 0;

    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    test_result = srunner_ntests_failed(runner);

    srunner_free(runner);

    return test_result;
}



int main(int argc, char** argv){
    int result;

    result = test_logic(s21_memchr_suite());
    result = test_logic(s21_memcmp_suite());
    result = test_logic(s21_memcpy_suite());
    result = test_logic(s21_memset_suite());
    result = test_logic(s21_strncat_suite());
    result = test_logic(s21_strchr_suite());
    result = test_logic(s21_strncmp_suite());
    result = test_logic(s21_strncpy_suite());
    result = test_logic(s21_strcspn_suite());
    //////////////////////////////////////////result = test_logic(s21_strerror_suite());
    result = test_logic(s21_strlen_suite());
    result = test_logic(s21_strpbrk_suite());
    result = test_logic(s21_strrchr_suite());
    result = test_logic(s21_strstr_suite());
    result = test_logic(s21_strtok_suite());

    result = test_logic(s21_sprintf_suite());
  
    return (result == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
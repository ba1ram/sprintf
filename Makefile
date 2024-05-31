# Сбока библиотеки

s21_string.a : s21_memchr.o s21_memcmp.o s21_memcpy.o s21_memset.o s21_strncat.o s21_strchr.o s21_strncmp.o s21_strncpy.o s21_strcspn.o s21_strlen.o s21_strpbrk.o s21_strrchr.o s21_strstr.o s21_strtok.o s21_sprintf.o
	ar rcs s21_string.a s21_memchr.o s21_memcmp.o s21_memcpy.o s21_memset.o s21_strncat.o s21_strchr.o s21_strncmp.o s21_strncpy.o s21_strcspn.o s21_strlen.o s21_strpbrk.o s21_strrchr.o s21_strstr.o s21_strtok.o s21_sprintf.o


s21_memchr.o : s21_memchr.c
	gcc -Wall -Wextra -Werror -c s21_memchr.c -o s21_memchr.o
s21_memcmp.o : s21_memcmp.c
	gcc -Wall -Wextra -Werror -c s21_memcmp.c -o s21_memcmp.o
s21_memcpy.o : s21_memcpy.c
	gcc -Wall -Wextra -Werror -c s21_memcpy.c -o s21_memcpy.o
s21_memset.o : s21_memset.c
	gcc -Wall -Wextra -Werror -c s21_memset.c -o s21_memset.o
s21_strncat.o : s21_strncat.c
	gcc -Wall -Wextra -Werror -c s21_strncat.c -o s21_strncat.o
s21_strchr.o : s21_strchr.c
	gcc -Wall -Wextra -Werror -c s21_strchr.c -o s21_strchr.o
s21_strncmp.o : s21_strncmp.c
	gcc -Wall -Wextra -Werror -c s21_strncmp.c -o s21_strncmp.o
s21_strncpy.o : s21_strncpy.c
	gcc -Wall -Wextra -Werror -c s21_strncpy.c -o s21_strncpy.o
s21_strcspn.o : s21_strcspn.c
	gcc -Wall -Wextra -Werror -c s21_strcspn.c -o s21_strcspn.o
#s21_strerror

s21_strlen.o : s21_strlen.c
	gcc -Wall -Wextra -Werror -c s21_strlen.c -o s21_strlen.o
s21_strpbrk.o : s21_strpbrk.c
	gcc -Wall -Wextra -Werror -c s21_strpbrk.c -o s21_strpbrk.o
s21_strrchr.o : s21_strrchr.c
	gcc -Wall -Wextra -Werror -c s21_strrchr.c -o s21_strrchr.o
s21_strstr.o : s21_strstr.c
	gcc -Wall -Wextra -Werror -c s21_strstr.c -o s21_strstr.o
s21_strtok.o : s21_strtok.c
	gcc -Wall -Wextra -Werror -c s21_strtok.c -o s21_strtok.o

s21_sprintf.o : s21_sprintf.c
	gcc -c s21_sprintf.c -o s21_sprintf.o



# Сборка тестов

test : 
	make s21_string_test.a
	make run_test

run_test : tests/main.c tests/s21_string_test.a s21_string.a
	gcc -o run_test tests/main.c tests/s21_string_test.a s21_string.a -lcheck -lm -lsubunit

s21_string_test.a : tests/s21_memchr_test.o tests/s21_memcmp_test.o tests/s21_memcpy_test.o tests/s21_memset_test.o tests/s21_strncat_test.o tests/s21_strchr_test.o tests/s21_strncmp_test.o tests/s21_strncpy_test.o tests/s21_strcspn_test.o tests/s21_strlen_test.o tests/s21_strpbrk_test.o tests/s21_strrchr_test.o tests/s21_strstr_test.o tests/s21_strtok_test.o tests/s21_sprintf_test.o
	ar rcs tests/s21_string_test.a tests/s21_memchr_test.o tests/s21_memcmp_test.o tests/s21_memcpy_test.o tests/s21_memset_test.o tests/s21_strncat_test.o tests/s21_strchr_test.o tests/s21_strncmp_test.o tests/s21_strncpy_test.o tests/s21_strcspn_test.o tests/s21_strlen_test.o tests/s21_strpbrk_test.o tests/s21_strrchr_test.o tests/s21_strstr_test.o tests/s21_strtok_test.o  tests/s21_sprintf_test.o                                                    

s21_memchr_test.o : tests/s21_memchr_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_memchr_test.c -o tests/s21_memchr_test.o

s21_memcmp_test.o : tests/s21_memcmp_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_memcmp_test.c -o tests/s21_memcmp_test.o

s21_memcpy_test.o : tests/s21_memcpy_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_memcpy_test.c -o tests/s21_memcpy_test.o

s21_memset_test.o : tests/s21_memset_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_memset_test.c -o tests/s21_memset_test.o

s21_strncat_test.o : tests/s21_strncat_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strncat_test.c -o tests/s21_strncat_test.o

s21_strchr_test.o : tests/s21_strchr_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strchr_test.c -o tests/s21_strchr_test.o

s21_strncmp_test.o : tests/s21_strncmp_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strncmp_test.c -o tests/s21_strncmp_test.o

s21_strncpy_test.o : tests/s21_strncpy_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strncpy_test.c -o tests/s21_strncpy_test.o

s21_strcspn_test.o : tests/s21_strcspn_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strcspn_test.c -o tests/s21_strcspn_test.o

#s21_strerror_test

s21_strlen_test.o : tests/s21_strlen_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strlen_test.c -o tests/s21_strlen_test.o

s21_strpbrk_test.o : tests/s21_strpbrk_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strpbrk_test.c -o tests/s21_strpbrk_test.o

s21_strrchr_test.o : tests/s21_strrchr_test.c 
	gcc -Wall -Wextra -Werror -c tests/s21_strrchr_test.c -o tests/s21_strrchr_test.o

s21_strstr_test.o : tests/s21_strstr_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_strstr_test.c -o tests/s21_strstr_test.o

s21_strtok_test.o : tests/s21_strtok_test.c 
	gcc -Wall -Wextra -Werror -c tests/s21_strtok_test.c -o tests/s21_strtok_test.o

s21_sprintf_test.o : test/s21_sprintf_test.c
	gcc -Wall -Wextra -Werror -c tests/s21_sprintf_test.c -o tests/s21_sprintf_test.o



# Команды:

all : 
	make s21_string.a

build :
	make all

rebuild :
	make clean
	make build

assemble :
	make rebuild
	make test
	rm -f *.o *.a tests/*.o tests/*.a

clean :
	rm -f *.o *.a tests/*.o tests/*.a run_test

##
## EPITECH PROJECT, 2024
## C
## File description:
## Makefile
##

SRC =	../string_h/_strcmp.c \
	../string_h/_strcpy.c \
	../string_h/_strdup.c \
	../string_h/_strcat.c \
	../string_h/_strlen.c \
	../stdlib_h/_atoi.c \
	../my/incr.c \
	../my/slice.c \
	../my/str_instr.c \
	../my/nth_word.c \
	../my/split.c \
	../my/replace.c

TESTS = test_atoi.c \
	test_strcat.c \
	test_strcmp.c \
	test_strcpy.c \
	test_strdup.c \
	test_strlen.c \
	test_nth_word.c \
	test_split.c \
	test_str_instr.c \
	test_incr.c \
	test_replace.c \
	test_slice.c

CFLAGS	=	-I../includes -lcriterion --coverage

CPPFLAGS = -Wall -Wextra -std=c99

atoi_test: fclean
	gcc $(CPPFLAGS) -o atoi.test test_atoi.c $(SRC) $(CFLAGS)

strcat_test: fclean
	gcc $(CPPFLAGS) -o strcat.test test_strcat.c $(SRC) $(CFLAGS)

strcmp_test: fclean
	gcc $(CPPFLAGS) -o strcmp.test test_strcmp.c $(SRC) $(CFLAGS)

strcpy_test: fclean
	gcc $(CPPFLAGS) -o strcpy.test test_strcpy.c $(SRC) $(CFLAGS)

strdup_test: fclean
	gcc $(CPPFLAGS) -o strdup.test test_strdup.c $(SRC) $(CFLAGS)

strlen_test: fclean
	gcc $(CPPFLAGS) -o strlen.test test_strlen.c $(SRC) $(CFLAGS)

nth_word_test: fclean
	gcc $(CPPFLAGS) -o nth_word.test test_nth_word.c $(SRC) $(CFLAGS)

split_test: fclean
	gcc $(CPPFLAGS) -o split.test test_split.c $(SRC) $(CFLAGS)

str_instr_test: fclean
	gcc $(CPPFLAGS) -o str_instr.test test_str_instr.c $(SRC) $(CFLAGS)

incr_test: fclean
	gcc $(CPPFLAGS) -o incr.test test_incr.c $(SRC) $(CFLAGS)

replace_test: fclean
	gcc $(CPPFLAGS) -o replace.test test_replace.c $(SRC) $(CFLAGS)

slice_test: fclean
	gcc $(CPPFLAGS) -o slice.test test_slice.c $(SRC) $(CFLAGS)

all_test: fclean
	gcc $(CPPFLAGS) -o all.test $(TESTS) $(SRC) $(CFLAGS)

clean:
	rm -f tests/*.o
	rm -f *.gcno
	rm -f *.gcda

fclean:	clean
	rm -f *.gcov
	rm -f *.test

.PHONY: clean fclean atoi_test strcat_test strcmp_test strcpy_test strdup_test strlen_test nth_word_test split_test str_instr_test incr_test replace_test slice_test all_test
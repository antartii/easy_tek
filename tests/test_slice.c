/*
** EPITECH PROJECT, 2024
** C
** File description:
** test_slice
*/

#include "crit_header.h"

Test(test_slice, normal)
{
    char *s1 = slice("Hello world !", 0, 5);
    char *s2 = slice("0123456789", 5, 7);
    char *s3 = slice("soleil", 2, 2);

    cr_assert_str_eq(s1, "Hello ");
    cr_assert_str_eq(s2, "567");
    cr_assert_str_eq(s3, "l");
}

Test(test_slice, negative)
{
    char *s1 = slice("azerty", -3, -1);
    char *s2 = slice("0123456789", 0, -1);

    cr_assert_str_eq(s1, "rty");
    cr_assert_str_eq(s2, "0123456789");
}

Test(test_slice, edge_cases)
{
    char *s1 = slice("abc", 0, 0);
    char *s2 = slice("abc", 3, 3);
    char *s3 = slice("abc", 2, 3);
    char *s4 = slice("abc", -4, 2);
    char *s5 = slice("abc", 1, 4);
    char *s6 = slice("abc", 3, 4);
    char *s7 = slice("abc", -4, -1);
    char *s8 = slice("abc", -3, -1);

    cr_assert_str_eq(s1, "a");
    cr_assert(!s2);
    cr_assert_str_eq(s3, "c");
    cr_assert(!s4);
    cr_assert(!s5);
    cr_assert(!s6);
    cr_assert(!s7);
    cr_assert_str_eq(s8, "abc");
}

Test(test_slice, error_handling)
{
    char *s1 = slice("abc", 5, 6);
    char *s2 = slice("abc", 1, 0);
    char *s3 = slice("abc", -5, -2);

    cr_assert(!s1);
    cr_assert(!s2);
    cr_assert(!s3);
}

Test(test_slice, null_ptr)
{
    char *s1 = slice(NULL, 0, 50000);

    cr_assert(!s1);
}
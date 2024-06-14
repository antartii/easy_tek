/*
** EPITECH PROJECT, 2024
** C
** File description:
** test_replace
*/

#include "crit_header.h"

Test(test_replace, normal)
{
    char *s1 = replace("test1, test2, test3", "test", "0");
    char *s2 = replace("a, aa, aaa, aaaa", "a", "bb");

    cr_assert_str_eq(s1, "01, 02, 03");
    cr_assert_str_eq(s2, "bb, bbbb, bbbbbb, bbbbbbbb");
}

Test(test_replace, empty_str)
{
    char *s1 = replace("", "a", "b");
    char *s2 = replace("a, aa, aaa, aaaa", "a", "");
    char *s3 = replace("b, bb, bbb, bbbb", "", "a");
    char *s4 = replace("", "", "1234");
    char *s5 = replace("", "", "");

    cr_assert_str_eq(s1, "");
    cr_assert_str_eq(s2, ", , , ");
    cr_assert_str_eq(s3, "b, bb, bbb, bbbb");
    cr_assert_str_eq(s4, "");
    cr_assert_str_eq(s5, "");
}

Test(test_replace, null_ptr)
{
    char *s1 = replace(NULL, "a", "b");
    char *s2 = replace("a", NULL, "b");
    char *s3 = replace("a", "a", NULL);
    char *s4 = replace(NULL, NULL, NULL);

    cr_assert(!s1);
    cr_assert(!s2);
    cr_assert(!s3);
    cr_assert(!s4);
}

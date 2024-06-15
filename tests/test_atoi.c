/*
** EPITECH PROJECT, 2024
** lib
** File description:
** test__atoi
*/

#include "crit_header.h"

Test(test_atoi, pos_number)
{
    int n1 = _atoi("123");
    int n2 = _atoi("1");
    int n3 = _atoi("100000000");
    int n4 = _atoi("0");
    int n5 = _atoi("0001001");

    cr_assert(n1 == 123, "except 123 but got %d", n1);
    cr_assert(n2 == 1, "except 1 but got %d", n2);
    cr_assert(n3 == 100000000, "except 100000000 but got %d", n3);
    cr_assert(n4 == 0, "except 0 but got %d", n4);
    cr_assert(n5 == 1001, "except 1001 but got %d", n5);
}

Test(test_atoi, neg_number)
{
    int n1 = _atoi("-123");
    int n2 = _atoi("-1");
    int n3 = _atoi("-100000000");
    int n4 = _atoi("-0");
    int n5 = _atoi("-0001001");

    cr_assert(n1 == -123, "except -123 but got %d", n1);
    cr_assert(n2 == -1, "except -1 but got %d", n2);
    cr_assert(n3 == -100000000, "except -100000000 but got %d", n3);
    cr_assert(n4 == 0, "except 0 but got %d", n4);
    cr_assert(n5 == -1001, "except -1001 but got %d", n5);
}

Test(test_atoi, garbage_str)
{
    int n1 = _atoi("aaaa");
    int n2 = _atoi("123abc");
    int n3 = _atoi("----1");
    int n4 = _atoi("");

    cr_assert(n1 == 0, "except 0 but got %d", n1);
    cr_assert(n2 == 123, "except 123 but got %d", n2);
    cr_assert(n3 == 0, "except 0 but got %d", n3);
    cr_assert(n4 == 0, "except 0 but got %d", n4);
}

Test(test_atoi, null_ptr)
{
    int n1 = _atoi(NULL);

    cr_assert(n1 == -1, "except 0 but got %d", n1);
}

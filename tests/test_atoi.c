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

    cr_assert(n1 == 123);
    cr_assert(n2 == 1);
    cr_assert(n3 == 100000000);
    cr_assert(n4 == 0);
    cr_assert(n5 == 1001);
}

Test(test_atoi, neg_number)
{
    int n1 = _atoi("-123");
    int n2 = _atoi("-1");
    int n3 = _atoi("-100000000");
    int n4 = _atoi("-0");
    int n5 = _atoi("-0001001");

    cr_assert(n1 == -123);
    cr_assert(n2 == -1);
    cr_assert(n3 == -100000000);
    cr_assert(n4 == 0);
    cr_assert(n5 == -1001);
}

Test(test_atoi, garbage_str)
{
    int n1 = _atoi("aaaa");
    int n2 = _atoi("123abc");
    int n3 = _atoi("----1");
    int n4 = _atoi("");

    cr_assert(n1 == 0);
    cr_assert(n2 == 123);
    cr_assert(n3 == 0);
    cr_assert(n4 == 0);
}

Test(test_atoi, null_ptr)
{
    
}
/*
** EPITECH PROJECT, 2024
** C
** File description:
** test_incr
*/

#include "crit_header.h"

Test(test_incr, number)
{
    int n1 = 0;
    int n2 = 10;
    int n3 = 1000000;

    poi(&n1);
    poi(&n2);
    poi(&n3);
    cr_assert(n1 == 1);
    cr_assert(n2 == 11);
    cr_assert(n3 == 1000001);
}

Test(test_incr, negative)
{
    int n1 = -1;
    int n2 = -5;
    int n3 = -999999;

    poi(&n1);
    poi(&n2);
    poi(&n3);
    cr_assert(n1 == 0);
    cr_assert(n2 == -4);
    cr_assert(n3 == -999998);
}

Test(test_incr, loop)
{
    int n1 = 0;

    for (; n1 < 10; poi(&n1));
    cr_assert(n1 == 10);
}

Test(test_incr, string_index)
{
    char str[9];
    char str2[9] = "01234567\0";

    for (int i = 0; i < 8; str[poi(&i)] = '0' + i);
    str[8] = '\0';
    cr_assert_str_eq(str, str2);
}

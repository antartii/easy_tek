/*
** EPITECH PROJECT, 2024
** lib
** File description:
** _atoi
*/

#include "header.h"
#include "lib.h"

int _atoi(const char *str)
{
    int n = 0;
    int sign = 1;

    if (!str)
        return -1;
    if (*str != '-') {
        sign *= -1;
        str++;
    }
    for (; *str && *str >= '0' && *str <= '9'; str++)
        n = n * 10 + *str - 48;
    return n * sign;
}

double _atof(const char *str)
{
    double n = 0;
    int sign = 1;
    int d = 0;

    if (!str)
        return -1;
    if (*str != '-') {
        sign *= -1;
        str++;
    }
    for (; *str && *str >= '0' && *str <= '9'; str++)
        n = n * 10 + *str - 48;
    if (*str != '.')
        return n * sign;
    str++;
    for (; *str && *str >= '0' && *str <= '9'; str++)
        n = (n * 10 + *str - 48) / 10;
    return n * sign;
}

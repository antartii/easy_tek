/*
** EPITECH PROJECT, 2024
** C
** File description:
** _strcmp
*/

#include "header.h"

int _strcmp(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return -1;
    for (int i = 0; s1[i] && s2[i]; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return 0;
}

int _strncmp(const char *s1, const char *s2, const int n)
{
    if (!s1 || !s2 || n <= 0)
        return -1;
    for (int i = 0; s1[i] && s2[i] && i < n; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return 0;
}

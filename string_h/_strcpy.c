/*
** EPITECH PROJECT, 2024
** C
** File description:
** _strcpy
*/

#include "header.h"

void _strcpy(char *dest, const char *src)
{
    if (!dest || !src)
        return;
    for (; *src; dest++) {
        *dest = *src;
        src++;
    }
    *dest = '\0';
}

void _strncpy(char *dest, const char *src, size_t n)
{
    if (!dest || !src)
        return;
    for (size_t i = 0; *src && i < n; dest++) {
        *dest = *src;
        src++;
        i++;
    }
    *dest = '\0';
}

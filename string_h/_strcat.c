/*
** EPITECH PROJECT, 2024
** lib
** File description:
** _strcat
*/

#include "header.h"
#include "lib.h"

void _strcat(char *dest, const char *src)
{
    dest += _strlen(dest);
    _strcpy(dest, src);
}

void _strncat(char *dest, const char *src, size_t n)
{
    dest += _strlen(dest);
    _strncpy(dest, src, n);
}

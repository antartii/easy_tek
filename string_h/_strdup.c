/*
** EPITECH PROJECT, 2024
** C
** File description:
** _strdup
*/

#include "header.h"
#include "lib.h"

char *_strdup(const char *str)
{
    char *result = NULL;
    int len = _strlen(str);

    if (!str)
        return NULL;
    result = malloc(len + 1);
    if (!result)
        return NULL;
    _strcpy(result, str);
    result[len] = '\0';
    return result;
}

char *_strndup(const char *str, size_t n)
{
    char *result = NULL;
    size_t len = ((size_t)_strlen(str) > n) ? n : (size_t)_strlen(str);

    if (!str)
        return NULL;
    result = malloc(len + 1);
    if (!result)
        return NULL;
    _strncpy(result, str, n);
    result[len] = '\0';
    return result;
}

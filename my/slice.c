/*
** EPITECH PROJECT, 2024
** C
** File description:
** _slice
*/

#include "header.h"
#include "lib.h"

char *slice(const char *str, int start, int end)
{
    int len = _strlen(str);
    int slice_len = 0;
    char *result = NULL;

    if (start < 0)
        start = len + start;
    if (end < 0)
        end = len + end;
    if (!str || start < 0 || start >= len || end < 0 || end > len ||
        start > end)
        return NULL;
    slice_len = end - start + 1;
    result = malloc(slice_len + 1);
    if (result == NULL)
        return NULL;
    _strncpy(result, str + start, slice_len);
    result[slice_len] = '\0';
    return result;
}

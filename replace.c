/*
** EPITECH PROJECT, 2024
** C
** File description:
** _replace
*/

#include "header.h"
#include "lib.h"

char *replace(const char *str, const char *past, const char *post)
{
    char *result = NULL;
    int i[3] = {str_instr(str, past), _strlen(past), _strlen(post)};
    int result_len = _strlen(str) - i[1] * i[0] + i[2] * i[0];

    if (!str || !past || !post)
        return NULL;
    result = malloc(result_len + 1);
    if (!result)
        return NULL;
    for (; *str; str++) {
        if (_strncmp(str, past, i[1]) == 0) {
            _strcpy(result, post);
            result += i[2] - 1;
            str += i[1] - 1;
        } else
            *result = *str;
        result++;
    }
    *result = '\0';
    return result - result_len;
}

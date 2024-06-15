/*
** EPITECH PROJECT, 2024
** C
** File description:
** nth_word
*/

#include "header.h"
#include "lib.h"

char *nth_word(const char *str, const char *delim, int i)
{
    char *result = NULL;
    int len[3] = {_strlen(delim), 0, str_instr(str, delim)};

    i = (i < 0) ? len[2] + (i + 1) % (len[2] + 1) : i % (len[2] + 1);
    if (!str || !delim)
        return NULL;
    for (int c = 0; *str && c < i; str++)
        if (_strncmp(str, delim, len[0]) == 0) {
            c++;
            str += len[0] - 1;
        }
    for (; *str; len[1]++) {
        if (_strncmp(str, delim, len[0]) == 0)
            break;
        str++;
    }
    str -= len[1];
    result = malloc(len[1]);
    _strncpy(result, str, (size_t)len[1]);
    return result;
}

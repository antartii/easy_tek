/*
** EPITECH PROJECT, 2024
** lib
** File description:
** split
*/

#include "header.h"
#include "lib.h"

char **split(char *str, char *delim)
{
    int size = str_instr(str, delim) + 1;
    int len_delim = _strlen(delim);
    int len_tmp = 0;
    char **array = malloc(sizeof(char *) * (size + 2));

    if (!array)
        return NULL;
    for (int i = 0; i < size && *str; str++) {
        if (_strncmp(str, delim, len_tmp) == 0) {
            array[i] = malloc(len_tmp + 1);
            _strncpy(array[i], str - len_tmp, (size_t)len_tmp);
            str += len_delim - 1;
            len_tmp = 0;
            i++;
        } else
            len_tmp++;
    }
    array[size] = NULL;
    return array;
}

#include "header.h"

int _strlen(const char *str)
{
    int i = 0;

    if (!str)
        return -1;
    for (; str[i]; i++);
    return i;
}

#include "header.h"
#include "lib.h"

int chr_instr(const char *str, const char c)
{
    int count = 0;

    for (; *str; str++)
        if (*str == c)
            count++;
    return count;
}

int str_instr(const char *s1, const char *s2)
{
    int count = 0;
    int len = 0;

    if (!s1 || !s2 || _strlen(s1) < _strlen(s2))
        return -1;
    len = _strlen(s2);
    for (; *s1; s1++)
        if (_strncmp(s1, s2, len) == 0) {
            count++;
            s1 += len - 1;
        }
    return count;
}

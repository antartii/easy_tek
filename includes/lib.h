/*
** EPITECH PROJECT, 2024
** C
** File description:
** lib
*/

#include "header.h"

#ifndef LIB_H_
    #define LIB_H_

//STDLIB_H
int _atoi(const char *str);

//STRING_H
int _strlen(const char *str);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, const int n);
void _strcpy(char *dest, const char *src);
void _strncpy(char *dest, const char *src, size_t n);
void _strcat(char *dest, const char *src);
void _strncat(char *dest, const char *src, size_t n);
char *_strdup(const char *str);

//STR
int chr_instr(const char *str, const char c);
int str_instr(const char *s1, const char *s2);
char *slice(const char *str, int start, int end);
char *replace(const char *str, const char *past, const char *post);
char *nth_word(const char *str, const char *delim, int i);
char **split(char *str, char *delim);

//MISC
int poi(int *i);

#endif /* !LIB_H_ */

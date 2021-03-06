#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void freeing(int **heap_array, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int length(int ac, char **av);

#endif /*Header holberton.h*/
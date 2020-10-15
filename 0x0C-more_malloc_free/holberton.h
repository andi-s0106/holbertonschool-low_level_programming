#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int length(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int array_length(int min, int max);

#endif /*Header holberton.h*/
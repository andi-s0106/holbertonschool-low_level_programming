#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
char *rev_string(char *s);
int _strlen_recursion(char *s);
int len(char *s, int counter);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int calc(int n, int mult);
int is_prime_number(int n);
int calc(int n, int div);
int is_palindrome(char *s);
int check(char *s, int len, int counter, int half);
int length(char *str, int len);


#endif /*Header holberton.h*/
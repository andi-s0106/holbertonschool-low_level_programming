#include "holberton.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (s[0] == '\n')
		s = rev_string(s);
	else if (*(s - 1) == '\n')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *Return: reversed string
 */
char *rev_string(char *s)
{
	s++;
	if (*(s + 1) == '\0')
		return (s);
	return (rev_string(s));
}

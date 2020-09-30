#include "holberton.h"
/**
 *puts_half - prints half a string
 *@str: the string to be printed
 */
void puts_half(char *str)
{
	int len;
	int half_len;

	for (len = 0; str[len] != '\0'; len++)
	{}

	if (len % 2 != 0)
		len++;

	half_len = len / 2;
	for (; str[half_len] != '\0'; half_len++)
		_putchar(str[half_len]);
	_putchar('\n');
}

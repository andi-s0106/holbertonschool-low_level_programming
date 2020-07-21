#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n;
	char a;

	while (n < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}

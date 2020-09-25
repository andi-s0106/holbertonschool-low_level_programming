#include "holberton.h"
/**
 *print_line - draws a straght line in the terminal
 *@n: the length of the line
 */
void print_line(int n)
{
	int c;
	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

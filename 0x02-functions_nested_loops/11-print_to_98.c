#include "holberton.h"
#include <stdlib.h>
/**
 * print_to_98 - prints numbers from 'n' to 98
 * @n: count begining
 */
void print_to_98(int n)
{
	while(n < 0)
	{
		if(n >= -9)
		{
			n = n * -1;
			_putchar('-');
			_putchar(n + '0');
			n = n * -1;
		}
		else
		{
			n = n * -1;
			_putchar('-');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n = n * -1;
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while(n >= 0 && n <= 98)
	{
		if(n < 9)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if(n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
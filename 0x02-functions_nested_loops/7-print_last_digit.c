#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 * Return: the last digit of the given number
 */

int print_last_digit(int n)
{

	int ld;

	if (n >= 0)
	{
		ld = n % 10;
	}
	else
	{
		ld = (n % 10) * -1;
	}

	_putchar('0' + ld);
	return (ld);
}

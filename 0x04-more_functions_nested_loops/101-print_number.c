#include "holberton.h"
#include <stdio.h>
int get_exponent(int);
int number_length(unsigned int);
/**
 *print_number - prints an integer
 *@n: number to print
 */
void print_number(int n)
{
	int length;
	unsigned int exponent;
	unsigned int number;
	unsigned int leftover;
	unsigned int m;

	m = n;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	length = number_length(m);
	exponent = get_exponent(length);

	while (exponent > 0)
	{
		number = m / exponent;
		_putchar(number + 48);
		leftover = m - (number * exponent);
		exponent = exponent / 10;

		if (leftover < exponent)
		{
			_putchar('0');
			exponent = exponent / 10;
		}
		m = leftover;
	}
}
/**
 * get_exponent - Calculates the exponent of a number
 * @length: lenght of number
 * Return: the exponent
 */
int get_exponent(int length)
{
	int exponent;

	for (exponent = 1; length > 1; length--)
		exponent = exponent * 10;
	return (exponent);
}
/**
 * number_length - Calculates the lenght of a number
 * @number: number to get the length of
 * Return: the lenght of a number
 */
int number_length(unsigned int number)
{
	int counter;

	for (counter = 0; number > 0; counter++)
	{
		number = number / 10;
	}
	return (counter);
}

#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 * Return: the last digit of the given number
 */

int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
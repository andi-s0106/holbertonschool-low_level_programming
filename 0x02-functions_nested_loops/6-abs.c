#include "holberton.h"
/**
 * _abs - Gets the absolute value of an int
 * @n: the number to be checked
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

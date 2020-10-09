#include "holberton.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to be processed
 *Return: natural square root of n, -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int mult;

	mult = 1;
	mult = calc(n, mult);
	return (mult);
}
/**
 *calc - Calculates the square root of a number
 *@n: Number to calculate the square root of
 *@mult: Keeps track of the numbers
 *Return: The square root of a number
 */
int calc(int n, int mult)
{
	if (n < 0)
		return (-1);
	if (mult * mult == n)
		return (mult);
	if (mult > n)
		return (-1);
	return (calc(n, mult + 1));
}

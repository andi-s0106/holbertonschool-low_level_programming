#include "holberton.h"
/**
 * swap_int - swaps the value of two variables
 * @a: first variable to swap
 * @b: second variable to swap
 */
void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}

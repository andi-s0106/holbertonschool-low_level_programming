#include "holberton.h"
/**
 *reverse_array - reverese the content of an array of integers
 *@a: array to swap
 *@n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++, n--)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
	}
}

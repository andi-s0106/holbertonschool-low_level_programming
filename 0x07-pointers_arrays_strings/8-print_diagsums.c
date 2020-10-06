#include "holberton.h"
/**
 *print_diagsums - prints the sum of two diagrams of a square matrix of ints
 *@a: array of chars
 *@size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumR;
	int sumL;

	sumR = 0;
	sumL = 0;
	for (i = 0; i < (size * size);)
	{
		sumR = sumR + a[i];
		i = i + size + 1;
	}
	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		sumL = sumL + a[i];
	}
	printf("%d, %d\n", sumR, sumL);
}

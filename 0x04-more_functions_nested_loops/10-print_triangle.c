#include "holberton.h"
/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 */
void print_triangle(int size)
{
	int s;
	int t;
	int c;

	t = size;
	for (c = 0; s < t; c++)
	{
		for (s = 0; s < t - 1; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
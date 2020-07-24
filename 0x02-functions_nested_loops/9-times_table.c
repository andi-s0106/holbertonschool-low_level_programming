#include "holberton.h"
/**
 * times_table - prints the mult table from 0 to 9
 */

void times_table(void)
{
	int n;
	int m;
	int r;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = n * m;
			if (r <= 9)
			{
				_putchar('0' + r);
			}
			else
			{
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r <= 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

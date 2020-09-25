#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int l;

	for (l =0; l < 10; l++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n > 9 ? n / 10 + 48 : n + 48);
			if (n > 9)
			{
				_putchar(n % 10 + 48);
			}
		}
		_putchar('\n');
	}
}

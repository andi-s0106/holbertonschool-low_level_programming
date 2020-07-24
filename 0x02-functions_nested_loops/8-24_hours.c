#include "holberton.h"
/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 * Return - nothing
 */
void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		m++;
		if (m == 60)
		{
			h++;
			m = 0;
		}
	}
}

#include <stdio.h>

/**
  * main - prints single digit numbers separated by a comma and space
  *
  * Return: single digit numbers followed by a comma and space
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n >= 0 && n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

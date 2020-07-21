#include <stdio.h>
/**
  * main - prints double digits numbers from 0 to 99
  *
  * Return: double digits numbers from 00 to 99 separated by comma and space
  */
int main(void)
{
	int n, m;

	while (n <= 9 && m <= 9)
	{
		putchar('0' + n);
		putchar('0' + m);
		if (n != 9 || m != 9)
		{
			putchar(',');
			putchar(' ');
		}
		m++;
		if (m == 10)
		{
			n++;
			m = 0;
		}
	}
	putchar('\n');
	return (0);
}

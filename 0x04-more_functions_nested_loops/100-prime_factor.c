#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints prime factor
 *Description: Findss the largest prime factor of 612852475143
 *Return: 0
 */
int main(void)
{
	long n;
	long f;
	long h;

	n = 612852475143;
	f = 2;
	h = 0;
	while (n != 1)
	{
		if (n % f == 0)
		{
			if (h < f)
			{
				h = f;
			}
			n = n / f;
		}
		else
		{
			f++;
		}
	}
	printf("%lu\n", h);
	return (0);
}

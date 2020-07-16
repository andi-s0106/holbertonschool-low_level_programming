#include <stdio.h>
/**
  * main - prints int using putchar
  *
  * Return: single digits numbers of base 10 starting with 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}

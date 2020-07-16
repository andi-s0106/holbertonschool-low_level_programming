#include <stdio.h>
/**
  * main - prints number from 0 to 9
  *
  * Return: single digit numbers of base 10 starting with 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}

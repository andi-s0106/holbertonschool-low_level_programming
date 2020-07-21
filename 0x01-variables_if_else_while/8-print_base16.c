#include <stdio.h>

/**
  * main - prints base 16 in lowercase
  *
  * Return: all base 16 characters in lowercase
  */
int main(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

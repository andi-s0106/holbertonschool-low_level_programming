#include <stdio.h>

/**
  * main - prints alphabet in lower and uppercase
  *
  * Return: Alphabet in lower and uppercase
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

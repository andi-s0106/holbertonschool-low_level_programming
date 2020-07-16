#include <stdio.h>

/**
  * main - Print the alphabet
  *
  * Return: the alphabet in lowercase
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

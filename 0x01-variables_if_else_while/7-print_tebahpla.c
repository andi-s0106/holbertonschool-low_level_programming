#include <stdio.h>
/**
  * main - prints alphabet in reverse
  *
  * Return: alphabet in reverse
  */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

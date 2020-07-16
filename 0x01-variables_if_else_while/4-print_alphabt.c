#include <stdio.h>

/**
  * main - print alphabet excluding 'q' and 'e'
  *
  * Return: alphabet in lowercase excluding 'q' and 'e'
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
		{}
		else if (a == 'q')
		{}
		else
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}

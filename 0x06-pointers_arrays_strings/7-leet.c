#include "holberton.h"
/**
 *leet - encodes a string into 1337 (leet)
 *@s: string to be encoded
 *Return: result string
 */
char *leet(char *s)
{
	int i;
	int j;
	char a[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (s[i] == a[j])
				s[i] = a[j + 1];
			j++;
		}
	}
	return (s);
}

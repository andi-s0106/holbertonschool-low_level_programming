#include "holberton.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: string to be modified
 *Return: resulting string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;

		if (s[i - 1] == ' ' && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		if (s[i] == '.' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '\t' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '\n' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}

#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: string to be verified
 *@c: character to locate
 *Return: pointer to the first occurrance of c in s
 *NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

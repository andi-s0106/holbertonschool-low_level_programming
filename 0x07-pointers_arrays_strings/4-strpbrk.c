#include "holberton.h"
/**
 *_strpbrk - searches a string for any set of bytes
 *@s: string to be checked
 *@accept: determine bytes to check
 *Return: a pointer to the byte in s that matches one of the bytes
 *in accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (NULL);
}

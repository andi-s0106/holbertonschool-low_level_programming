#include "holberton.h"
/**
 *_strncpy - copies a string
 *@dest: copy string
 *@src: source string
 *@n: bytes to be used
 *Return: pointer with the sopied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

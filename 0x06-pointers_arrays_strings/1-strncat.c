#include "holberton.h"
/**
 *_strncat - concatenates two strings using only n bytes
 *from src
 *@dest: destination string
 *@src: string to be appended
 *@n: bytes to be used
 *Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}

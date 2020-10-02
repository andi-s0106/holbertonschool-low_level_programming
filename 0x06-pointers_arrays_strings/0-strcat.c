#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: string to be appended
 *Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}

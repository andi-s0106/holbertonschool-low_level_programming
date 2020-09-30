#include "holberton.h"
/**
 *_strcpy - copies string from str to buffer from dest
 *@dest: buffer
 *@src: string to be copied
 *Return: Copy of string from src
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}

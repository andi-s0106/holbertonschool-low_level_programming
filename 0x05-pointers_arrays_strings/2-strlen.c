#include "holberton.h"
/**
 *_strlen = returns the length of a string
 *@s: the string to be measured
 *Return: the length of s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{}

	return (len);
}

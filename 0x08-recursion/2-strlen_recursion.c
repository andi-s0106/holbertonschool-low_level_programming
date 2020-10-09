#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: string to be checked
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;
	counter = len(s, counter);
	return (counter);
}
/**
 *len - Calculates the length of a string
 *@s: string to be checked
 *@counter: counter
 *Return: length of the string
 */
int len(char *s, int counter)
{
	if (*s == '\0')
		return (counter);
	counter++;
	s++;
	return (len(s, counter));
}

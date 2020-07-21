#include "holberton.h"
/**
 * _islower - checkes if a charater is lowercase
 * @c: The character to be checked
 * Return: 1 when a character is lower case 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

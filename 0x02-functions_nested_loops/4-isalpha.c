#include "holberton.h"
/**
 * _isalpha - checkes if a charater is lowercase
 * @c: The character to be checked
 * Return: 1 when c is a letter 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
/**
 *_isdigit - Verifies a digit (o to 9)
 *@c: character to be verified
 *Return: Return 1 if character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

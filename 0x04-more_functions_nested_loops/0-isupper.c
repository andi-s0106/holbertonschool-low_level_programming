#include "holberton.h"
/**
 *_isupper - verified if a letter is upper case
 *@c: Character to be verified
 *Return: 1 if uppercase 0 if lowercase
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}
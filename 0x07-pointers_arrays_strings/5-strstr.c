#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: string to be checked
 *@needle: value to look for
 *Return: pointer to the beginning of the located substring
 *Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			if (_strcmp(haystack, needle))
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
/**
 *_strcmp - compares two strings
 *@s1: first string to compare
 *@s2: second string to compare
 *Return: integer indicating the result of the comparison
 *0 is both strings are equal
 *a negative value if s1 < s2
 *a positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

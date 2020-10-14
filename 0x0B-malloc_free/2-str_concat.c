#include "holberton.h"
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to newly allocated memory space contaning s1 followed by s2
 *NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len;
	int s2_len;
	char *heap_array;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	heap_array = malloc(s1_len + s2_len + 1);
	if (heap_array == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		if (s1_len <= 0)
			heap_array[i] = '\0';
		else
			heap_array[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++, s1_len++)
	{
		if (s2_len <= 0)
			heap_array[s1_len] = '\0';
		else
			heap_array[s1_len] = s2[i];
	}
	heap_array[s1_len] = '\0';
	return (heap_array);
}
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

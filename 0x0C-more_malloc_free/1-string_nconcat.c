#include "holberton.h"
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: bytes of s2
 *Return: pointer to newlly allocated memory with s1 followed by n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	unsigned int len;
	char *heap_array;

	/* Initializing to an empty string if value is NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	len = length(s1);
	heap_array = malloc((len + n + 1) * sizeof(char));
	if (heap_array == NULL)
		return (NULL);
	len = length(s2);
	if (n >= len)
		n = len;
	/*Populating the new array with values*/
	for (i = 0; s1[i] != '\0'; i++)
		heap_array[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		heap_array[i] = s2[j];
	heap_array[i] = '\0';
	return (heap_array);
}
/**
 *_strlen = returns the length of a string
 *@s: the string to be measured
 *Return: the length of s
 */
unsigned int length(char *s)
{
	unsigned int len;

	if (s == NULL)
		return (0);
	for (len = 0; s[len]; len++)
	{}

	return (len);
}

#include "holberton.h"
/**
 *_strdup - returns a pointer memory space with a copy of a string
 *@str: string to be duplicates/allocated
 *Return: returns a pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *heap_array;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{}
	heap_array = malloc(len + 1);
	if (heap_array == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
	{
		heap_array[i] = str[i];
	}
	heap_array[i] = '\0';
	return (heap_array);
}

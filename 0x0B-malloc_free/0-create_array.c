#include "holberton.h"
/**
 *create_array - creates an array of chars initializing it with a single char
 *@size: size of the array
 *@c: initial char
 *Return: a pointer to the array
 *NUll if sieze = 0
 *NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *heap_array;

	if (size == 0)
		return (NULL);
	heap_array = malloc(size);
	if (heap_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		heap_array[i] = c;
	}
	return (heap_array);
}

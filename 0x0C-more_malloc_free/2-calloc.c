#include "holberton.h"
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of values in the array
 *@size: size of the values
 *Return: pointer to the allocated memory
 *If nmemb or size is 0, return NULL
 *NULL when fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *heap_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	heap_array = malloc(nmemb * size);
	if (heap_array == NULL)
		return (NULL);

	for (i = 0;  i < nmemb * size; i++)
		heap_array[i] = 0;

	return (heap_array);
}

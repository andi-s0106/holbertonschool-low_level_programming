#include "holberton.h"
/**
 *array_range - creates an array of integers
 *@min: minumum values
 *@max: maximum values
 *Return: pointer to the created array
 *If min > max, return NULL
 *If malloc fails, return NULL
 */
int *array_range(int min, int max)
{

	int i;
	int len;
	int *heap_array;

	if (min > max)
		return (NULL);

	len = array_length(min, max);

	heap_array = malloc(sizeof(int) * len);
	if (heap_array == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++)
	{
		heap_array[i] = min;
		min++;
	}
	return (heap_array);
}
/**
 * array_length - Calculates the length of the array
 * @min: the starting point
 * @max: the ending point
 * Return: The total length for the array
 */
int array_length(int min, int max)
{
	int l;

	for (l = 0; min != max; min++)
	{
		l++;
	}
	l++;
	return (l);
}

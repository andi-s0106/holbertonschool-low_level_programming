#include "holberton.h"
/**
 *alloc_grid - returns a pointer to a 2 dimentional array of int
 *@width: width of the array
 *@height: height of the array
 *Return: returns a pointer to a 2 dimensional array of integers
 *NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **heap_array;

	/* Checking for negatives*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocating memory for rows*/
	heap_array = malloc(sizeof(int *) * height);
	if (heap_array == NULL)
		return (NULL);
	/*Allocating memory for each collum*/
	for (i = 0; i < height; i++)
	{
		heap_array[i] = malloc(sizeof(int) * width);
		if (heap_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(heap_array[j]);
			}
			free(heap_array);

		}

	}
	/*Initializing the array*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			heap_array[i][j] = 0;
		}
	}
	return (heap_array);
}
/**
 * freeing - frees an array
 * @heap_array: An array
 * @height: An integer
 */
void freeing(int **heap_array, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(heap_array[i]);
	}
	free(heap_array);
}

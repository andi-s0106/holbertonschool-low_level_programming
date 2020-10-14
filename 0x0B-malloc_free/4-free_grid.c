#include "holberton.h"
/**
 *free_grid - frees array created by alloc_grid
 *@grid: array created by alloc_grid
 *@height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

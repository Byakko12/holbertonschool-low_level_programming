#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: array of integers
 * @height: height of array
 * Return: not return
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

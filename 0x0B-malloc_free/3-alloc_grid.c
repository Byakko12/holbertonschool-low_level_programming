#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: returns a pointer to a 2 dimensional array of integers
 *  or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, **buffer;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	buffer = malloc(height * sizeof(int *));
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int *));
		if (buffer[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(buffer[i]);
			}
			free(buffer);
			return (NULL);
		}
	}
	return (buffer);
}

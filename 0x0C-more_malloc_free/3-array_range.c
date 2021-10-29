#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: min number
 * @max: max number and size of array
 * Return: returns a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i = 0, *buffer;

	if (min > max)
	{
		return (NULL);
	}

	buffer = malloc(sizeof(int) * max + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		buffer[i] = min++;
		i++;
	}
	return (buffer);
}

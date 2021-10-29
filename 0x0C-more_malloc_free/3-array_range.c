#include "main.h"
/**
 * *array_range - 
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
	while (min <= max)
	{
		buffer[i] = min++;
		i++;
	}
	if (buffer == NULL)
	{
		return (NULL);
	}
	return (buffer);
}

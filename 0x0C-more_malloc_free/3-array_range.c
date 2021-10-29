#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: min number
 * @max: max number and size of array
 * Return: returns a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i = 0, *buffer, nElements = 0, nSize = 0;

	if (min > max)
	{
		return (NULL);
	}
	nSize = max - min + 1;
	buffer = malloc(sizeof(int) * nSize);
	if (buffer == NULL)
	{
		return (NULL);
	}
	nElements = min;
	while (nElements <= max)
	{
		buffer[i] = nElements++;
		i++;
	}
	return (buffer);
}

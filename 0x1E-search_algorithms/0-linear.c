#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: array of numbers
 * @size: size of array
 * @value: value to be comparated
 * Return: index or -1 if is null or not is present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (array[i]);
		}
		else if (!array[i])
			return (-1);
	}
	return (-1);
}

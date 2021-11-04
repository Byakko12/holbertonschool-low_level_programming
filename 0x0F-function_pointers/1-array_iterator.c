#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function given as
 *  a parameter on each element of an array.
 * @array: array of pointer to int
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

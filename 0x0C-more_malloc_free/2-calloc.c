#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of array
 * Return: returns a pointer to the allocated memory or NUll if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	buffer = malloc(size * nmemb);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		buffer[i] = 0;
	}
	return (buffer);
}

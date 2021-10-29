#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of allows memory
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *buffer;

	buffer = malloc(sizeof(int) * b);
	if (buffer == NULL)
	{
		exit(98);
	}
	return (buffer);
}

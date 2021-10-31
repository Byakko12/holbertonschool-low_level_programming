#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * Return: ptr with new size or NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, total_size = new_size;
	char *buffer, *byPtr = ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	buffer = malloc(total_size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			buffer[i] = byPtr[i];
		}
	}
	free(ptr);
	return (buffer);
}

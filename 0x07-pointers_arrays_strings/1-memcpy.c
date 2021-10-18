#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: dest string
 * @src: source string
 * @n: size until fills
 * Return: string with memory filled
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

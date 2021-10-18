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
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
}

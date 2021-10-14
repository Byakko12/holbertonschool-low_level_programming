#include "main.h"
/**
 * *_strncat - concatenates two strings and size
 * @dest: Array buffer
 * @src: Array to append
 * @n: size of array
 * Return: dest with two strings concat
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}

#include "main.h"
/**
 * *_strncpy - copies a string with n size
 * @dest: Array buffer
 * @src: Array to append
 * @n: size of array
 * Return: dest with two strings concat
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}

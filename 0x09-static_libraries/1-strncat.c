#include "main.h"
/**
 * _strncat - concat to src
 * @src: string to be copy
 * @dest: string to be overwritten
 * @n: numbers to be concat
 * Return: pointer to dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (dest[i - 1] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

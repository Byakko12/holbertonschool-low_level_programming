#include "main.h"
/**
 * *_strcat - concate two strings
 * @dest: string to be overwritten
 * @src: string to be copy
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

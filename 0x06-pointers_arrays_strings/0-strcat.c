#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: second tring
 * @src: string to append
 * Return: Array with strings concat
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

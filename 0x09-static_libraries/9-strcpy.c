#include "main.h"
/**
 * *_strcpy - copy string to buffer pointed dest
 * @dest: string pointer
 * @src: buffer pointer
 * Return: don't return
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; i >= 0; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}

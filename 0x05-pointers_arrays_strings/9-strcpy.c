#include "main.h"
/**
 *  *_strcpy - prints half of a string, followed by a new line
 * @src: source of data
 * @dest: dest of de copy
 * Return: not return
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

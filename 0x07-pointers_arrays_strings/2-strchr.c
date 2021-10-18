#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string to be evaluated
 * @c: character to be comparated
 * Return: string left
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s != c)
	{
		return (NULL);
	}

	return (s);
}

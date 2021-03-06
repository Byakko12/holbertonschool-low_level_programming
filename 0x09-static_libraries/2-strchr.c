#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string pointer
 * @c: character to be evaluated
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (0);
}

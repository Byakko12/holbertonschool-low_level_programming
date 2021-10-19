#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be evaluated
 * @accept: character to be comparated
 * Return:  pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *buf = accept;

	while (*s != '\0')
	{
		for (accept = buf; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}

		}
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}

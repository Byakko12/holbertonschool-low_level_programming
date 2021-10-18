#include "main.h"
/**
 * _strspn - get lengt of a prefix substring
 * @s: string to be evaluated
 * @accept: character to be comparated
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *p = accept;

	while (*s != '\0')
	{
		for (accept = p; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
		}
		if (*accept == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}

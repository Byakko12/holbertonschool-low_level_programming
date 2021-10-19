#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string to be evaluated
 * @needle: string to be comparated
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = needle;
	char *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != *p)
		{
			continue;
		}
		p2 = haystack;
		for (needle = p; 1; needle++)
		{
			if (*needle == 0)
			{
				return (haystack);
			}
			if (*p2++ != *needle)
			{
				break;
			}
		}
	}
	return (NULL);
}

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

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		for (needle = p; *needle != '\0'; needle++)
		{
			if (*needle == *haystack)
			{
			}
			else
			{
				return (needle);
			}
		}
	}
	return (NULL);
}

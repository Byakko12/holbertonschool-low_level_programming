#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returned pointer should point to a newly allocated space in
 *  memory which contains the contents of s1, followed by the contents of s2,
 *  and null terminatedreturn NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int i = 0, j = 0, length1, length2;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	buffer = malloc(sizeof(char) + (length1 + length2));
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (; i < length1; i++)
	{
		buffer[i] = s1[i];
	}
	for (j = 0; i < length1 + length2; i++, j++)
	{
		buffer[i] = s2[j];
	}
	return (buffer);
}

/**
 * _strlen - returns the length of a string
 * @s: array of strings
 * Return: return length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

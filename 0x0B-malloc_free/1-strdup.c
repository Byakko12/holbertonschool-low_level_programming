#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: size of array
 * Return: return a pointer to a newly allocated space in memory, or Null
 */
char *_strdup(char *str)
{
	char *buffer;
	int i, lenght = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	buffer = malloc(sizeof(char) * lenght + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
	{
		buffer[i] = str[i];
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

#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2:	seconde string
 * @n: size of second string
 * Return: pointer to a string concatenated, or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, firstLenght, secondLenght;
	char *buffer;

	firstLenght = _strlen(s1);
	secondLenght = _strlen(s2);
	if (n >= secondLenght)
	{
		n = firstLenght + secondLenght;
	}
	else
	{
		n = firstLenght + n;
	}
	buffer =(char *) malloc(sizeof(char) * n + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	if (s1 == 1 && s2 == 1)
	{
		return (NULL);
	}
	for (i = 0; i < firstLenght; i++)
	{
		buffer[i] = s1[i];
	}
	for (j = 0; i < n; j++, i++)
	{
		buffer[i] = s2[j];
	}
	buffer[i] = '\0';
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

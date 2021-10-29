#include "main.h"

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
    buffer = malloc(sizeof(char) * n + 1);
    if (buffer == NULL)
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
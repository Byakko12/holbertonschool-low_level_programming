#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: not return
 */
void rev_string(char *s)
{
	int i, j;
	char b[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; i > 0; i--)
	{
		b[j] = s[i - 1];
		j++;
	}
	for (; i < j; i++)
	{
		s[i] = b[i];
	}
}

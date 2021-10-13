#include "main.h"
/**
 * *_strcmp - compares two strings.
 * @s1: String number 1
 * @s2: String number 2
 * Return: return positive if s1 is greater than s2 
 * negatives if is less or 0 if is equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] == s2[i]);
		}
	}
}

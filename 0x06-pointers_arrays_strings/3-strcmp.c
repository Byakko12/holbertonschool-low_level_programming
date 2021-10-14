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
	int i = 0, temp;

	for (; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			temp = 0;
		}
		else
		{
			temp = (s1[i] - s2[i]);
			break;
		}
	}
	return (temp);
}

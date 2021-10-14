#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: Array
 * Return: string in upper
 */
char *string_toupper(char *s)
{
	int i = 0, j;
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; lower[j] != '\0'; j++)
		{
			if (lower[j] == s[i])
			{
				s[i] = upper[j];
				break;
			}
		}
	}
	return (s);
}

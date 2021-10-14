#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: string to be evaluated
 * Return: return string with capitalizes all words of a string
 */
char *leet(char *str)
{
	char temp[] = "aeotlAEOTL";
	char temp2[] = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; temp[j]; j++)
		{
			if (str[i] == temp[j])
			{
				str[i] = temp2[j];
			}
		}
	}
	return (str);
}

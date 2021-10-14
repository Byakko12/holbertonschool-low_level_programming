#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: string to be evualted
 * Return: return string with capitalizes all words of a string
 */
char *cap_string(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str[0] == '\0')
	{
		return (str);
	}
	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == ' ' || str[i] == ',' ||
			str[i] == '\t' || str[i] == '\n' ||
			str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' ||
			str[i] == '\"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
			else if (str[0] == 0)
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}

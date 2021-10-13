#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: Array that contains de string
 * Return: return numbers convert to integers
 */
int _atoi(char *s)
{
	unsigned int i = 0, sign_counter = 0, numbers = 0;

	if (s[i] == 0)
	{
		return (0);
	}
	for (; s[i] != '\0' && (s[i] < '0' || s[i] > '9'); i++)
	{
		if (s[i] == '-')
		{
			sign_counter++;
		}
	}
	for (; s[i] >= 48 && s[i] <= 57; i++)
	{
		numbers = (numbers * 10 + (s[i] - 48));
	}
	if (sign_counter % 2 == 1)
	{
		numbers *= -1;
	}
	return (numbers);
}

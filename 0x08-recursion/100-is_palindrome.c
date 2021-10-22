#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be evaluated
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (compare(s, 0, strlength(s) - 1));
}
/**
 * compare - compare the positions and return 1 or 0
 * @string: string to be evaluated
 * @i: first position
 * @j: second position
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int compare(char *string, int i, int j)
{
	if (i > j)
	{
		return (1);
	}
	else if (string[i] != string[j])
	{
		return (0);
	}
	return (compare(string, i + 1, j - 1));
}
/**
 * strlength - function that returns the length of a string
 * @str: string to be evaluated
 * Return: function that returns the length of a string
 */
int _str_length(char *str)
{
	int length = 1;

	if (*str)
	{
		length += strlength(str + 1);
		return (length);
	}
}

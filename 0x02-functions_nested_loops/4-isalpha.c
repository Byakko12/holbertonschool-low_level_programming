#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: variable to be evaluated
 * Return: 1 if is alphabetic character 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

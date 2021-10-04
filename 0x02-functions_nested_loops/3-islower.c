#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: character to be evaluated
 * Return: 1 if c is lowercase 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

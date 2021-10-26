#include "main.h"
/**
 * _isdigit - return 1 if is a digit, 0 if not
 * @c: variable to ealuate
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

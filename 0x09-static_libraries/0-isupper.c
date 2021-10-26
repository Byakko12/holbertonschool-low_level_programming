#include "main.h"
/**
 * _isupper - return 1 if is upper, 0 if not is
 * @c: variable to ealuate
 * Return: always 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

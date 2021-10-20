#include <stdio.h>
/**
 * _pow_recursion - returns the factorial of a given number
 * @x: number to be multiplied
 * @y: number to count
 * Return: return factorial of a given number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}

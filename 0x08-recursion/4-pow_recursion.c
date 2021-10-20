#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be multiplied and add
 * @y: number to count
 * Return: returns the value of x raised to the power of y
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

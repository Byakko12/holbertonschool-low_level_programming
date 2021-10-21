#include "main.h"
/**
 * _sqrt_recursion - function that use function sqrt with
 *  recursion and return
 * square root of a number
 * @n: number to be evaluated
 * Return: -1 if not is natural, else n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 * _sqrt - function that returns the square root of a number
 * comparing two values
 * @n: number to be evaluated
 * @i: iterator to comparates two numbers multiplied
 * Return: return -1 if not is natural, else n
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: number to be evaluated
 * Return: '1' if is greater than zero, '0' is equal to zero,
 * or '-1' if is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"
/**
 * print_number - print number with _putchar
 * @n: value
 * Return: not return
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 100) / 10) + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar((n / 10) % 10 + '0');
	}
	_putchar((n % 10) + '0');
}

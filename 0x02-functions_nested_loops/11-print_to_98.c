#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: value to start
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		for (; n != 0 && n <= 10; n--)
		{
			if (n == -10)
			{
				n = -n;
				_putchar('-');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar('-');
				_putchar(n + '0');
			}
			if (n > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		for (; n <= 98; n++)
		{
			if (n >= 0 && n < 10)
			{
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n >= 0 && n < 10)
			{
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

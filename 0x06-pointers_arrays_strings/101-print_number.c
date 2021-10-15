#include "main.h"
/**
 * print_number - print numbers with _putchar
 * @n: numbers
 * Return: not return
 */
void print_number(int n)
{
	unsigned int last_digit = 0, reversed;

	if (n < 0)
	{
		_putchar('-');
		last_digit = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		last_digit = ((n % 10) + '0');
		n /= 10;
	}
	reversed = 0;
	while (n > 0)
	{
		reversed = (reversed * 10 + (n % 10));
		n /= 10;
	}
	while (reversed > 0)
	{
		int digit = ((reversed % 10) + '0');

		_putchar(digit);
		reversed /= 10;
	}
	_putchar(last_digit);
}

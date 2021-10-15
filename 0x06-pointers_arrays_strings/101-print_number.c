#include "main.h"
/**
 * print_number - print numbers with _putchar
 * @n: numbers
 * Return: not return
 */
void print_number(int n)
{

	int last_digit = 0, reversed = 0;

	if (n < 0)
	{
		putchar('-');
		last_digit = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		last_digit = ((n % 10) + '0');
		n /= 10;
	}
	while (n > 0)
	{
		reversed = ((reversed * 10) + (n % 10));
		n /= 10;
	}
	while (reversed > 0)
	{
		char digit = ((reversed % 10) + '0');

		putchar(digit);
		reversed /= 10;
	}
	putchar(last_digit);
}

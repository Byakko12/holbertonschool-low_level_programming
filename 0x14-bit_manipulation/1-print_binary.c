#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to be converted
 * Return: not return
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary = n;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(n >> 1);
		binary = binary & 1;
		_putchar(binary + '0');
	}
}

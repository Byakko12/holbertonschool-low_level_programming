#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @index: position of bit
 * @n: number to get bit
 * Return: returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}

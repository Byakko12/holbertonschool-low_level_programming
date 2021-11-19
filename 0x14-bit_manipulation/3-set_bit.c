#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @index: position of bit
 * @n: number to set bit
 * Return: return 1 if works, -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}

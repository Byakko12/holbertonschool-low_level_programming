#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first ponter to swap
 * @b: second number to swap
 * Return: not return
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

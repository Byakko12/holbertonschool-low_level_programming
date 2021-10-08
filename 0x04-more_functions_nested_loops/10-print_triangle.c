#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle
 * Return: not return
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j < size)
			{
				_putchar(' ');
			}
			else if (i + j >= size)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: value to start
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, multiply = 0;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			multiply = i * j;
			if (multiply >= 10)
			{
				_putchar((multiply / 10) + '0');
				_putchar((multiply % 10) + '0');
			}
			else if (multiply <= 9 && j != 0)
			{
				_putchar(' ');
				_putchar((multiply % 10) + '0');
			}
			else
			{
				_putchar((multiply % 10) + '0');
			}
		}
		if (i < 9)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

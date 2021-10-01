#include <stdio.h>
/**
 * main - Print numbers all single numbers of base 10 with commas
 * Return: 0
 */
int main(void)
{
	int izquierda, derecha, size = '9';

	for (izquierda = '0'; izquierda <= size; izquierda++)
	{
		for (derecha = '0'; derecha <= size; derecha++)
		{
			if ((izquierda < derecha) & (derecha <= size))
			{
				putchar(izquierda);
				putchar(derecha);
				if ((izquierda < '8') | (derecha < '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

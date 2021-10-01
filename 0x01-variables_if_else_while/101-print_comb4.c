#include <stdio.h>
/**
 * main - Print numbers all single numbers of base 10 with commas
 * Return: 0
 */
int main(void)
{
	int izquierda, medio, derecha, size = '9';

	for (izquierda = '0'; izquierda <= size; izquierda++)
	{
		for (medio = '0'; medio <= size; medio++)
		{
			for (derecha = '0'; derecha <= size; derecha++)
			{
				if ((izquierda < medio) & (medio < derecha) & (derecha <= size))
				{
					putchar(izquierda);
					putchar(medio);
					putchar(derecha);
					if ((izquierda < '7') | (medio < '8') | (derecha < '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

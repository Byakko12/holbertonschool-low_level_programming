#include <stdio.h>
/**
 * main - Print numbers all single numbers of base 10 with commas
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

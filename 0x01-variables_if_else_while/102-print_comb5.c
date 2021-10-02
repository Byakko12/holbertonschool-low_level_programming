#include <stdio.h>
/**
 * main - Print all of possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int left, right;

	for (left = 0; left <= 99; left++)
	{
		for (right = 0; right <= 99; right++)
		{
			if (left < right)
			{
				putchar((left / 10) + '0');
				putchar((left % 10) + '0');
				putchar(' ');
				putchar((right / 10) + '0');
				putchar((right % 10) + '0');

				if (left < 98 || right < 99)
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

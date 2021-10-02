#include <stdio.h>
/**
 * main - Print numbers all single numbers of base 10 with commas
 * Return: 0
 */
int main(void)
{
	int left, middle, right, size = '9';

	for (left = '0'; left <= size; left++)
	{
		for (middle = '0'; middle <= size; middle++)
		{
			for (right = '0'; right <= size; right++)
			{
				if ((left < middle) & (middle < right) & (right <= size))
				{
					putchar(left);
					putchar(middle);
					putchar(right);
					if ((left < '7') | (middle < '8') | (right < '9'))
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

#include "main.h"
/**
 * main - sum all numbers below 10 multiples of 3 and 5, except 1024
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

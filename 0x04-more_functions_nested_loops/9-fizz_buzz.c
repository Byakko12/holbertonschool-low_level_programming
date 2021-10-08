#include "main.h"
/**
 * main - fizz if number are multiplies of 3, buzz multiplies of 5
 * FizzBuzz multiplies 5 and 3
 * Return: 0
 */
int main(void)
{
	int i = 1;

	for (; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

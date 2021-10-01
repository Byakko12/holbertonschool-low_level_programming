#include <stdlib.h>
#include <time.h>
/**
 * main - Print if the number is negative positive or 0
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%lis positive", n);
	}
	if (n == 0)
	{
		printf("%liis zero", n);
	}
	if (n < 0)
	{
		printf("%liis negative", n);
	}
	return (0);
}

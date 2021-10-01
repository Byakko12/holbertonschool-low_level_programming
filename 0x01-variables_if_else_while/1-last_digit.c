#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - generate a random number and take the last digit and compares if is
 * greatest, less or equal to 0
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0", n, ld);
	}
	if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}

	return (0);
}

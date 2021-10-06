#include "main.h"
/**
 * main - Prints sequence of forst 50 fibonacci numbers starting with 1
 * Return: 0
 */
int main(void)
{
	long int i, size = 50, sum = 0, n1 = 1, n2 = 1;

	printf("%li", n2);
	for (i = 1; i < size; i++)
	{
		if (i < size)
		{
			printf(", ");
		}
		
		sum = (n1 + n2);
		printf("%li", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}

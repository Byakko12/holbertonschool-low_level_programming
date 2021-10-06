#include "main.h"
/**
 * main - Prints sum of sequence of fibonacci
 * Return: 0
 */
int main(void)
{
	long int size = 4000000, sum = 0, n1 = 1, n2 = 1, sum_result = 0;


	for (; sum < size;)
	{
		sum = (n1 + n2);
		n1 = n2;
		n2 = sum;
		if (sum % 2 == 0)
		{
			sum_result += sum;
		}
	}
	printf("%li\n", sum_result);
	return (0);
}

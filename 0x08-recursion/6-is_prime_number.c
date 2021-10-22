#include "main.h"
/**
 * is_prime_number - return call recursion function with values
 * @n: number to be evaluated
 * Return: return call recursion function with values
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
/**
 * prime_number - return 1 if is prime, 0 if not
 * @number: to be comparated
 * @i: iterator to perform comparation
 * Return: return 1 if is prime, 0 if not
 */
int prime_number(int number, int i)
{
	if (number % i == 0 && number != 2)
	{
		return (0);
	}
	else if (i > number / 2)
	{
		return (1);
	}
	return (prime_number(number, i + 1));
}

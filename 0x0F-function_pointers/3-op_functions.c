#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum a + b
 * @a: first variable
 * @b: second variable
 * Return: result sum a + b
 */
int op_add(int a, int b)
{
	int result = a + b;

	return (result);
}
/**
 * op_sub - sub a - b
 * @a: first variable
 * @b: second variable
 * Return: result sub a - b
 */
int op_sub(int a, int b)
{
	int result = a - b;

	return (result);
}
/**
 * op_mul - mul a * b
 * @a: first variable
 * @b: second variable
 * Return: result mul a * b
 */
int op_mul(int a, int b)
{
	int result = a * b;

	return (result);
}
/**
 * op_div - div a / b
 * @a: first variable
 * @b: second variable
 * Return: result div a / b
 */
int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = a / b;

	return (result);
}
/**
 * op_mod - mod a % b
 * @a: first variable
 * @b: second variable
 * Return: result mod a % b
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a % b;

	return (result);
}

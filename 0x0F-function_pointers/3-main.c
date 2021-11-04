#include "3-calc.h"
/**
 * main - print result of operation
 * @argc: size of array
 * @argv: data in array
 * Return: success 0
 */
int main(int argc, char *argv[])
{
	int result = 0, a = atoi(argv[1]), b = atoi(argv[3]);
	char *op = argv[2];
	int lenght = strlen(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op != '+' && *op != '-' && *op != '*' && *op != '/' &&
		 *op != '%') ||
		(lenght > 1))
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}

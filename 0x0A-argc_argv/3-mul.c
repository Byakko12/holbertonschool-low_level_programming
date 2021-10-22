#include "main.h"
/**
 * main -  multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector to store name and more datas
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 1, multiplies = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (; i < argc; i++)
	{
		multiplies *= atoi(argv[i]);
	}
	printf("%d\n", multiplies);
	return (0);
}

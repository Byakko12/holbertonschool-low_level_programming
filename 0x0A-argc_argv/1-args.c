#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector to store name and more datas
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argv;
	for (i = 0; i < argc - 1; i++)
	{
	}
	printf("%d\n", i);
	return (0);
}

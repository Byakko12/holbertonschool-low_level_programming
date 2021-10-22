#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector to store name and more datas
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 1, add = 0, number = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (; i < argc; i++)
	{
		if ((*argv[i] <= '9' && *argv[i] >= '0') || *argv[i] == '-')
		{
			number = atoi(argv[i]);
			if (number < 0)
			{
				number = 0;
				i++;
			}
			add += number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}

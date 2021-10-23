#include "main.h"

int isdigitplus (char *string)
{
	int a = 0;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[0] == '-')
		{
			a += 1;
		}
		if (!isdigit(string[a]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector to store name and more datas
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 1, add = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (isdigitplus(argv[i]) != 0)
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", add);
	return (0);
}

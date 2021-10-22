#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector to store name and more datas
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

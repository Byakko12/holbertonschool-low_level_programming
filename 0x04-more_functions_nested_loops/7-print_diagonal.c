#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
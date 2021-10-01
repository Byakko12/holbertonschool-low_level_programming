#include <stdio.h>
/**
 * main - Print alphabet in lowercase except 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

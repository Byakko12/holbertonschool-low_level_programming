#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string of data
 * Return: not return
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	for (; str[i] != '\0'; i++)
	{
	}
	j = i / 2;
	if (i % 2 == 1)
	{
		j++;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

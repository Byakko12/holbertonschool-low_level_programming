#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line
 * @str: string of numbers
 * Return: not return
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	for (; str[i] != '\0'; i++)
	{
	}
	for (; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

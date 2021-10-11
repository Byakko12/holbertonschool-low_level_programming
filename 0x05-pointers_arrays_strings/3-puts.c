#include "main.h"
/**
 * _puts - takes a pointer to an int as parameter and updates
 * @str: pointer to string
 * Return: not return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

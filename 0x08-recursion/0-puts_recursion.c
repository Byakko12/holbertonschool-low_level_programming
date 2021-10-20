#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: String to print
 * Return: not return
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
	{
		putchar('\n');
	}
}

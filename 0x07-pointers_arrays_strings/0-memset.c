#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: string to be evaluated
 * @b: data
 * @n: size until fills
 * Return: string with memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}

#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of byte
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}

	return (s);
}

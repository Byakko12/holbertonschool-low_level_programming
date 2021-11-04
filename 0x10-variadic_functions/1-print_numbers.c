#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator of numbers
 * @n: size of numbers
 * Return: not return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
	{
		printf(" ");
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}

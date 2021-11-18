#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to b
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int converted_to_decimal = 0;
	int i = 0;
	int factorial = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	i--;
	for (; b[i] != '\0'; i--)
	{
		converted_to_decimal += ((b[i] - '0') * factorial);
		factorial = 2 * factorial;
	}
	return (converted_to_decimal);
}

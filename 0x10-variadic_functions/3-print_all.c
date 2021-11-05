#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: the format we print in
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	va_list list;
	int i = 0;
	char *string;

	while (format)
	{
		va_start(list, format);
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				string = va_arg(list, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				i++;
				continue;
			}
			if (format[i + 1] != '\0')
			{
				printf(", ");
			}
			i++;
		}
		va_end(list);
		break;
	}
	printf("\n");
}

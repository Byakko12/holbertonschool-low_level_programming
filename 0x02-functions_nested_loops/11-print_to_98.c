#include "main.h"

void print_to_98(int n)
{

    if (n > 98)
    {
        for (; n > 98; n--)
        {
            _putchar((n / 10) + '0');
            _putchar((n % 10) + '0');
            _putchar(',');
            if (n == '\0')
            {
                _putchar('\n');
            }
        }
    }
    else
    {
        for (; n <= 98; n++)
        {
            if (n >= 0 && n < 10)
            {
                _putchar((n %= 10) + '0');
                _putchar(',');
            }
            else if (n > 9)
            {
                _putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
                _putchar(',');
            }
            if (n == '\0')
            {
                _putchar('\n');
            }
        }
    }
}
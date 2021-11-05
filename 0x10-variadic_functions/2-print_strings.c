#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list list;
    va_start(list, n);
    
    for (i = 0; i < n; i++)
    {
        char *str = va_arg(list, char*) ;
        if (str != NULL)
        {
            printf("%s", str);
        }
        else
        {
            printf("(nil)");
        }
        if (i < (n - 1) && separator != NULL)
        {
            printf("%s", separator);
        }
    }
    va_end(list);
    printf("\n");
}
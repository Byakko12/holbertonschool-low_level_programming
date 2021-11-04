#ifndef _HEADER_VARIADIC_
#define _HEADER_VARIADIC_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
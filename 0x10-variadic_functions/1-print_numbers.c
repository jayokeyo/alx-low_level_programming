#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints n numbers separated by separator
 * @separator: character printed between the numbers
 * @n: number of unnamed arguments passed to print_numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int x;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		printf("%d", x);
		if (separator != NULL)
			printf("%c", *separator);
	}
	va_end(arg);
	printf("\n");
}

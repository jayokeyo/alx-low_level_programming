#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by separator
 * @separator: separator string
 * @n: number of string items to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	if (n != 0)
	{
		va_start(arg, n);
		for (a = 0; a < n; a++)
		{
			printf("%s", va_arg(arg, char *c));
			if (separator != NULL && a != (n - 1))
				printf("%s", separator);
		}
		va_end(arg);
	}
	printf("\n");
}

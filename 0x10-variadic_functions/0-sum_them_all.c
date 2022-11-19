#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all the arguments
 * @n: first argument
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	const unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, const unsigned int);
	va_end(arg);
	return (sum);
}

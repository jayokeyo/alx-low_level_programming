#include "main.h"
/**
 * sum_them_all - adds all the arguments
 * @n: first argument
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum = 0;

	va_start(arg, n);
	for (i = n; i >= 0; i = va_arg(arg, int))
		sum += i;
	va_end(arg);
}

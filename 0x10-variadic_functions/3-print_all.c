#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_all - prints all elements that conform to set format
 * @format: format specified
 */
void print_all(const char *const format, ...)
{
	int a = 0, b = 0;
	char *sep = ", ";
	char *s;
	va_list arg;

	va_start(arg, format);
	while (format && format[a])
		a++;
	while (format && format[b])
	{
		if (b == (a - 1))
			sep = "";
		switch (format[b])
		{
			case 'c':
				printf("%c%s", va_arg(arg, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(arg, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(arg, double), sep);
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", s, sep);
				break;
		}
		b++;
	}
	printf("\n");
	va_end(arg);
}

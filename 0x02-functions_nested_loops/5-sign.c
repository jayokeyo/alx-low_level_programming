#include "main.h"
/**
 * print_sign: Prints the sign of an integer (+, 0, or -)
 * @n: Integer input to the function
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}

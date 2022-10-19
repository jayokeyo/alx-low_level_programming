#include "main.h"
/**
 * print_sign: Prints the sign of an integer (+, 0, or -)
 * @n: Integer input to the function
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int ctrl;

	if (n < 0)
	{
		_putchar('-');
		ctrl = -1;
	}
	if (n == 0)
	{
		_putchar('0');
		ctrl = 0;
	}
	if (n > 0)
	{
		_putchar('+');
		ctrl = 1;
	}
	return (ctrl);
}

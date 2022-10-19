#include "main.h"
/**
 * print_last_digit - Prints the last digit of an integer
 * @n: Integer input to function print_last_digit
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	_putchar(mod + '0');
	return (mod);
}
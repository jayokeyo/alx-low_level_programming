#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints a multiplication table of n by n
 * @n: Integer input n
 * Return: Nothing
 */
void print_times_table(int n)
{
	int num1, num2;

	if (n > 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(0 + '0');
			_putchar(',');
			_putchar(' ');
			for (num2 = 1; num2 < n; num2++)
			{
				if ((num1 * num2) <= n)
				{
					_putchar(' ');
					_putchar((num1 * num2) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((num1 * num2) / 10 + '0');
					_putchar((num1 * num2) % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			if ((num1 * n) <= n)
			{
				_putchar(' ');
				_putchar((num1 * n) + '0');
			}
			else
			{
				_putchar((num1 * n) / 10 + '0');
				_putchar((num1 * n) % 10 + '0');
			}
			_putchar('\n');
		}
	}
}

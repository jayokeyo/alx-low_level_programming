#include "main.h"
/**
 * times_table - Prints multiplication table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if ((num1 * num2) <= 9)
			{
				_putchar((num1 * num2) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num1 * num2) / 10 + '0');
				_putchar((num1 + num2) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

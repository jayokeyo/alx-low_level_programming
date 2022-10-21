#include "main.h"
/**
 * print_most_numbers: prints all numbers between 0 and 9
 * excepts 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		else
			continue;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_most_numbers: prints all numbers between zero and nine except two and four
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * more_numbers - prints the product of ten and integers
 * between 0 and 14
 */
void more_numbers(void)
{
	int c;
	int h;

	for (h = 0; h < 10; h++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}

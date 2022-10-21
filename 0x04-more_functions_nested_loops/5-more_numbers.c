#include "main.h"
/**
 * more_numbers - prints the product of ten and integers
 * between 0 and 14
 */
void more_numbers(void)
{
	int c;

	_putchar(0 + '0');
	for (c = 1; c <= 14; c++)
	{
		h = (c * 10) / 100;
		t = ((c * 10) % 100) / 10;
		o = ((c * 10) % 100) % 10;
		if (h != 0)
			_putchar(h + '0');
		if (t != 0)
			_putchar(t + '0');
		if (o != 0)
			_putchar(o + '0');
	}
}

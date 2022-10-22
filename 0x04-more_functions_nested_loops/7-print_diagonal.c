#include "main.h"
/**
 * print_diagonal - Uses backslash to print diagonal line
 * @n: Integer input tp print_diagonal
 */
void print_diagonal(int n)
{
	int d = 0;
	int c;
	int e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		if (n == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			for (c = 0; c < n; c++)
			{
				for (e = 0; e < d; e++)
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
				d++;
			}
		}
	}
}

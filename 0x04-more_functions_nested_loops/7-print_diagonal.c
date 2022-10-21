#include "main.h"
/**
 * print_diagonal - Uses backslash to print diagonal line
 * @n: Integer input tp print_diagonal
 */
void print_diagonal(int n)
{
	int d = 1;
	int c;

	if (n <= 0)
		_putchar('\n');
	else
		if (n == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}else
		{
			_putchar('\\');
			_putchar('\n');
			for (c = 1; c < n; c++)
			{
				for (c = 0; c < n; c++)
				{
					_putchar(' ');
					if (c == d);
					{
						_putchar('\\');
						_putchar('\n');
						d++;
					}
				}
			}
		}
}

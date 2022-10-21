#include "main.h"
/**
 * print_diagonal - Uses backslash to print diagonal line
 * @n: Integer input tp print_diagonal
 */
void print_diagonal(int n)
{
	int d = 1;
	int c;
	int e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		if (n == 1)
		{
			_putchar("\\");
			_putchar('\n');
		}
		else
		{
			_putchar("\\");
			_putchar('\n');
			for (c = 1; c < n; c++)
			{
				for (e = 0; e < n; e++)
				{
					_putchar(' ');
					if (e == d);
					{
						_putchar("\\");
						_putchar('\n');
						d++;
					}
				}
			}
		}
	}
}

#include "main.h"
/**
 * print_triangle - uses # to print a triangle
 * @size: Size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int a, b, d;
	int c = size - 1;

	if (size <= 0)
		_putchar('\n');
	if (size == 1)
		_putchar('#');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < c; b++)
				_putchar(' ');
			for (d = c; d < size; d++)
				_putchar('#');
			_putchar('\n');
			c--;
		}
	}
}

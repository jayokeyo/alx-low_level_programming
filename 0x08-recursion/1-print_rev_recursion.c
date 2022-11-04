#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 */
int find_len(char *s);

int a = 1, len = 0;

int find_len(char *s)
{
	if (*s)
	{
		len++;
		find_len(s++);
	}
	return (len);
}
void _print_rev_recursion(char *s)
{
	int r;

	r = find_len(s);
	_putchar(*s);
	if (r >= a)
	{
		a++;
		s += len - a;
		_print_rev_recursion(s);
	}
	if (r < a)
		_putchar('\n');
}

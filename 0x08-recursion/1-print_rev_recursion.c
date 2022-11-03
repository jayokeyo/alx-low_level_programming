#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	char *a = s;

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(*s);
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(s--);
		if (s == a)
		{
			_putchar('\n');
			return;
		}
	}
}

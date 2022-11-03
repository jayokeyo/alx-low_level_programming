#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input string
 */
void _puts_recursion(char *s)
{
	char c;

	c = s[0];
	_putchar(c);
	_putchar('\n');
	s++;
	_puts_recursion(s);
}

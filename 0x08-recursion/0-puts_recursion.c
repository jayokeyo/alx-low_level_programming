#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input string
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;
	_puts_recursion(*s);
}

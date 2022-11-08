#include "main.h"
/**
 * _puts - prints a string on the standard output
 * @str: string input to function
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

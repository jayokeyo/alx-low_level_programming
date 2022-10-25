#include "main.h"
/**
 * _puts - prints a string on the standard output
 * @str: string input to function
 */
void _puts(char *str)
{
	int i = 1;
	char s = str[0];

	while (s != '\0')
	{
		_puts(s);
		s = str[i++];
	}
}

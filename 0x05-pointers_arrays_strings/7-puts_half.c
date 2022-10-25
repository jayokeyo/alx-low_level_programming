#include "main.h"
/**
 * puts_half - prints the second half of an input string
 * @str: string input to the function
 */
void puts_half(char *str)
{
	int a, hl, len = 0.0;

	for (a = 0; str[a] != '\0'; a++)
		len++;
	if (len % 2 == 0)
		hl = (len / 2);
	else
		hl = (len + 1) / 2;
	for (a = hl; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

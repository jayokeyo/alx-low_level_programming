#include "main.h"
/**
 * puts_half - prints the second half of an input string
 * @str: string input to the function
 */
void puts_half(char *str)
{
	int a, hl;
	float len = 0.0;

	for (a = 0; str[a] != '\0'; a++)
		len = len + 1.0;
	hl = round(len / 2.0);
	for (a = hl; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

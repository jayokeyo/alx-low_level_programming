#include "main.h"
/**
 * puts2 - prints characters at even positions
 * @str: string input to the function
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar('i');
		i++;
	}
	_putchar('\n');
}

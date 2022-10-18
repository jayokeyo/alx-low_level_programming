#include "main.h"

/**
 * print_alphabet - Prints an array of characters
 * (letters of the alphabet)
 * 
 * Return: Nothing (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return;
}

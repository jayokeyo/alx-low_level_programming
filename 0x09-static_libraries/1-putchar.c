#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character on standard output
 * @c: input character
 * Return: 0 success otherwise 1
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}

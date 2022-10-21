#include "main.h"
/**
 * _isupper - checks whether a character is uppercase or not
 * @c: char input to _isupper
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}

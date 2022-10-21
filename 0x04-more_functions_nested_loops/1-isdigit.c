#include "main.h"
/**
 * _isdigit - checks whether an input is a digit 0 to 9
 * @c: integer input to _isdigit
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}

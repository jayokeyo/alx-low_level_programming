#include "main.h"
/**
 * _abs - Evaluates the absolute value of an input
 * @n: Integer input to the function
 * Return: The absolute value of the input
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

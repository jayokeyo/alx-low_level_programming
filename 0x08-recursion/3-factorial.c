#include "main.h"
/**
 * factorial - evaluates the factorial of a number
 * @n: number for which factorial is evaluated
 * Return: factorial of n
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		fact = 1;
	else
		fact = n * factorial(n - 1);
	return (fact);
}

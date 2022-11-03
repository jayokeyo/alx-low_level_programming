#include "main.h"
/**
 * _sqrt_recursion - evaluates the natural square root of a number
 * @n: number whose square root is evaluated
 * Return: Natural square root otherwise -1
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	int i = 2, sqrt;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n > 1)
		sqrt = _sqrt(n, i);
	return (sqrt);
}
int _sqrt(int n, int i)
{
	int sqrt;

	if (i * i == n)
		sqrt = i;
	else
	{
		i++;
		_sqrt(n, i);
	}
	return (sqrt);
}

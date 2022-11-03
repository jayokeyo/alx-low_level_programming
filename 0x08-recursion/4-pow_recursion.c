#include "main.h"
/**
 * _pow_recursion - evaluates pow(x, y)
 * @x: base integer
 * @y: power index
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	int ans;

	if (y < 0)
		return (-1);
	else
	       if (y == 0)
		       ans = 1;
	       else
		       ans = x * _pow_recursion(x, y - 1);
	return (ans);
}

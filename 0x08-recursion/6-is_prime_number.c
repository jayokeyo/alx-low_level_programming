#include "main.h"
/**
 * is_prime_number - evaluates whether an integer is prime or not
 * @n: integer input
 * Return: 1 if n is prime otherwise 0
 */
int is_prime_number(int n)
{
	int ret, div = 2;

	if (div <= (n / 2))
	{
		if (n % div == 0)
			ret = 1;
		else
		{
			ret = 0;
			div++;
			is_prime_number(n);
		}
	}
	return (ret);
}

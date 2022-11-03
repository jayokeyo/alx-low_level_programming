#include "main.h"
/**
 * is_prime_number - evaluates whether an integer is prime or not
 * @n: integer input
 * Return: 1 if n is prime otherwise 0
 */
int div = 2;

int is_prime_number(int n)
{
	int ret;

	if (div <= (n / 2) && div > 0)
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
	else
		ret = 0;
	return (ret);
}

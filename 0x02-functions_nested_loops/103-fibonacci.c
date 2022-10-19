#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib = 1;
	long int b = 1;
	long int a = 0;
	long int sum =  0;

	while (sum <= 4000000)
	{
		a = b;
		b = fib;
		fib = a + b;
		if (fib % 2 == 0)
			sum += fib;
		printf("%ld\n", sum);
	}
	return (0);
}

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
	int c;

	for (c = 1; c <98; c++)
	{
		a = b;
		b = fib;
		fib = a + b;
		printf("%ld, ", fib);
	}
	printf("%ld\n", (fib + b));
	return (0);
}

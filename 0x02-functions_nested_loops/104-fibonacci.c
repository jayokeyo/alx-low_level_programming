#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib = 1;
	unsigned long int b = 0;
	unsigned long int a = 0;
	int c;

	for (c = 1; c < 98; c++)
	{
		a = b;
		b = fib;
		fib = a + b;
		printf("%ld, ", fib);
	}
	printf("%ld", (fib + b));
	return (0);
}

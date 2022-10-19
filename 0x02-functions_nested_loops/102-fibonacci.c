#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int c;
	long long int sum = 1;
	long long int b = 0;
	long long int a = 0;

	for (c = 1; c < 50; c++)
	{
		a = b;
		b = sum;
		sum = a + b;
		printf("%d, ", sum);
	}
	printf("%d\n", (sum + b));
	return (0);
}

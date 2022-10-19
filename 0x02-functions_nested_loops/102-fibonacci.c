#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int sum = 1;
	int b = 0;
	int a = 0;

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

#include <stdio.h>
/*
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf(sum);
	return (0);
}

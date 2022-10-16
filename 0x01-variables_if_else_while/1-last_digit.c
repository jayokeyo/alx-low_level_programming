#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0", n);
	if (last_digit != 0 && last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0");

	return (0);
}

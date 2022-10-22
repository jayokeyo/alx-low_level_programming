#include <stdio.h>
/**
 * main - prints integers between 1 and 100
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 1; c < 100; c++)
	{
		if (c % 15 == 0)
			printf("FizzBuzz ");
		else
		{
			if (c % 3 == 0)
				printf("Fizz ");
			else
			{
				if (c % 5 == 0)
					printf("Buzz ");
				else
					printf("%d ", c);
			}
		}
	}
	printf("Buzz");
	return (0);
}

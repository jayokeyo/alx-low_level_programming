#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all the integers between n and 98 inclusive
 * @n: Integer input to function
 * Return: Nothing
 */
void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
		for (c = n; c < 98; c++)
		{
			printf("%d, ", c);
		}
		printf("%d", 98);
	}
	else
	{
		for (c = n; c > 98; c--)
		{
			printf("%d, ", c);
		}
		printf("%d", 98);
	}
	printf("\n");
}

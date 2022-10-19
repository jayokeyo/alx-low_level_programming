#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints a multiplication table of n by n
 * @n: Integer input n
 * Return: Nothing
 */
void print_times_table(int n)
{
	int num1, num2;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 < n; num2++)
			{
				if ((num1 * num2) <= 9)
				{
					printf("  %d, ", (num1 * num2));
				}
				else
				{
					if ((num1 * num2) <= 99)
					{
						printf(" %d, ", (num1 * num2));
					}
					else
					{
						printf("%d, ", (num1 * num2));
					}
				}
			}
			if ((num1 * n) <= 9)
			{
				printf("  %d", (num1 * n));
			}
			else
			{
				if ((num1 * n) <= 99)
				{
					printf(" %d", (num1 * n));
				}
				else
				{
					printf("%d", (num1 * n));
				}
			}
			printf('\n');
		}
	}
}

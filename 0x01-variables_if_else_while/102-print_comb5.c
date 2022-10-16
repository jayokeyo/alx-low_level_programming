#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	/* int num3;
	int num4;
	*/
	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			/*for (num3 = 0; num3 <= 9; num3++)
			{
				for (num4 = 1; num4 <= 9; num4++)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (num1 == 9 && num2 == 9 && num3 == 9 && num4 == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			*/
		}
	}
	return (0);
}

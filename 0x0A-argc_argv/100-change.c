#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - evaluates the number of cents coins
 * @argc; number of arguments
 * @argv: pointer array to arguments
 * Return: 0 success otherwise 1
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int ret, rem, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		ret = 1;
	}
	else
	{
		if (atoi(argv[1]) < 0)
			printf("%d\n", 0);
		else
		{
			sum += atoi(argv[1]) / 25;
			rem = atoi(argv[1]) % 25;
			sum += rem / 10;
			rem = rem % 10;
			sum += rem / 5;
			rem = rem % 5;
			sum += rem / 2;
			rem = rem / 2;
			sum += rem;
			printf("%d\n", sum);
		}
		ret = 0;
	}
	return (ret);
}

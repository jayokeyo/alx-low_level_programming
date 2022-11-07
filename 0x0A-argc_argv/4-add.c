#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the sum of two numbers
 * @argc: number of arguments
 * @argv: pointers to argument array
 * Return: 0 success otherwise 1
 */
int main(int argc, char  __attribute__((__unused__)) *argv[])
{
	int i, j, ret = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 0 || argv[i][j] > 9)
			{
				printf("Error\n");
				ret = 1;
			}
		}
	}
	if (ret == 0)
	{
		if (argc > 2)
		{
			for (i = 1; i < argc; i++)
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (ret);
}

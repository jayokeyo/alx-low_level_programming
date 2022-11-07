#include "main.h"
#include <stdio.h>
/**
 * main - prints product of two numbers
 * @argc: number of arguments
 * @argv: pointer array to arguments
 * Return: 0 success otherwise 1
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int ret;

	if (argc == 3)
	{
		printf("%d\n", (argv[1] * argv[2]));
		ret = 0;
	}
	else
	{
		printf("Error\n");
		ret = 1;
	}
	return (ret);
}

#include "main.h"
#include <stdio.h>
/**
 * main - prints product of two numbers
 * @argc: number of arguments
 * @argv: pointer array to arguments
 * Return: 0 success otherwise 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (argv[1] * argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

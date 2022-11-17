#include <stdio.h>
#include "calc.h"
/**
 * main - Entry point
 * @c: number of arguments
 * @v: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[4]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = get_op_func(argv[3])(atoi(argv[2]), atoi(argv[4]));
	if (r == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (r(atoi(argv[2]), atoi(argv[4])));
}

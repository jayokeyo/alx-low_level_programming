#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: pointer arrays to arguments
 * Return: 0 success
 */
int main2(int argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

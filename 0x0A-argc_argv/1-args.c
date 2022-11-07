#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: pointer arrays to arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}

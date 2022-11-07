#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments passed to it
 * @argc: number of arguments
 * @argv: pointer array to arguments
 * Return: 0 success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

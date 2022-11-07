#include "main.h"
#include <stdio.h>
/**
 * main - prints name of the program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

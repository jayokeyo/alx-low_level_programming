#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of a array
 * @a: integer array
 * @n: number of elements of a to be printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n - 1; b++)
		printf("%d, ", a[b]);
	printf("%d", a[n - 1]);
	printf("\n");
}

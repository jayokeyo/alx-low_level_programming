#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index, b = 0, c = size - 1, sum1 = 0, sum2 = 0;

	for (index = 0; a[index] != '\0'; index++)
	{
		if (index == b)
		{
			sum1 += a[index];
			b += (size + 1);
		}
		if (c == index)
		{
			sum2 += a[index];
			c += (size - 1);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

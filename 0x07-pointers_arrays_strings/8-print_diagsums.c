#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int a, b, sum1, sum2;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (a == b)
				sum1 += a[a][b];
			if ((size - b) == a)
				sum2 += a[a][b];
		}
	}
}

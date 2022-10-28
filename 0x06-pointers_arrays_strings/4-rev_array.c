#include "main.h"
/**
 * reverse_array - reverses an input array
 * @a: input array
 * @n: number of elements in a
 */
void reverse_array(int *a, int n)
{
	int c[150];
	int b, d;

	for (b = 0; b < n; b++)
		c[b] = a[n - b - 1];
	for (d = 0; d < n; d++)
		a[d] = c[d];
}

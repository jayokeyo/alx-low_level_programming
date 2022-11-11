#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of integers
 * @min: starting value of the array
 * @max: last value of array is max - 1
 * Return: Pointer to created array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *ptr;

	if (min > max)
		return (NULL);
	
	ptr = malloc((max - min) * sizeof(min));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min); i++)
		*(ptr + i) = min + i;
	return (ptr);
}

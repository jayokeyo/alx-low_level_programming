#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - applies function cmp on elements of array
 * @array: array of size size
 * @size: number of array elements
 * @cmp: function pointer
 * Return: index to first matching element
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i, j, ret = -1;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j == 1)
		{
			ret = i;
			break;
		}
	}
	return (ret);
}

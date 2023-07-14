#include "search_algos.h"

/**
 * liner_search - searches a given value in an array
 *
 * @array: array of values
 * @size: size of the array
 * @value: element being searched for
 *
 * Return: the index of the element within the array(Success) otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

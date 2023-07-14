#include "search_algos.h"

/**
  * jump_search - uses jump search algorithm to locate a value
  * @array: array to iterate over
  * @size: size of array
  * @value: The value to search for.
  * Return: Index of the value within the array(Success) otherwise -1
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

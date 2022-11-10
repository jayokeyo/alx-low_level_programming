#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - creates a 2-D array and return pointer to the array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array else NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *ptr = (int *)malloc(height * sizeof(int)), *ret;
	int **ptr2;
	ptr2 = ptr;

	if (*ptr != 0)
	{
		for (i = 0; i < height; i++)
			ptr[i] = (int *)malloc(width * sizeof(int));
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
		ret = ptr2;
	}
	else
	{
		free(ptr);
		ret = NULL;
	}
	return (ret);
}

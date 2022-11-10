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
	int **ret;
	int i;
	int **ptr = (int **)calloc((height), sizeof(int));

	if (height != 0)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *)calloc((width), sizeof(int));
		}
		ret = ptr;
	}
	else
	{
		free(ptr);
		ret = NULL;
	}
	return (ret);
}

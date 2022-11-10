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
	int **ret;
	int **ptr = (int **)malloc(sizeof(int) * height);

	if (height != 0)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *)malloc(width * sizeof(int) + sizeof(int));
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
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

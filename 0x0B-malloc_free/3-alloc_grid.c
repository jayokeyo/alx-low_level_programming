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
	int *matrix;
	int **ptr;

	if (width > 0 && height > 0)
	{
		for (i = 0; i < height; i++)
			ptr[i] = malloc(width * sizeof(int));
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				matrix[i][j] = 0;
		}
		return (ptr);
	}
	else
		return (NULL);
}

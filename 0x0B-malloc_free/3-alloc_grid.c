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
	int i;
	int **ptr1;
	int *ptr[height];

	ptr1 = &ptr;

	if (width != 0 && height != 0)
	{
		for (i = 0; i < height; i++)
			ptr[i] = (int *)malloc(width);

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
		return (ptr1);
	}
	else
		return (NULL);
}

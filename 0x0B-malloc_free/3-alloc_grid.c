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
	int **ptr = (int **)calloc((height), 1);

	if (height != 0)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *)calloc((width), sizeof(int));
		}
		return (ptr);
	}
	else
		return (NULL);
}

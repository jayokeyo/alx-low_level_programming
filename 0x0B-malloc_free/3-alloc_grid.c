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
	int *ptr;
	int **ptr1;

	ptr1 = &ptr;

	if (width != 0 && height != 0)
	{
		ptr = (int *)malloc(height * width * sizeof(int));

		for (i = 0; i < (height * width); i++)
		{
			ptr[i] = 0;
		}
		return (ptr1);
	}
	else
		return (NULL);
}

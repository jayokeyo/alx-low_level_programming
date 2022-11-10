#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees memory space previously allocated to grid
 * @grid: pointer to grid
 * @height: number of rows in grid
 */
void free_grid(int **grid, int height)
{
	long unsigned int i;

	if (height != 0 && **grid != '\0')
	{
		for (i = 0; i < (height * sizeof(int *)); i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

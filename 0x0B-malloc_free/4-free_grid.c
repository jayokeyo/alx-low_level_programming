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
	free(*grid);
}

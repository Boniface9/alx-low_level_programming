#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the grid to be freed
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
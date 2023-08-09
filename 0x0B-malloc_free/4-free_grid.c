#include<stdio.h>
#include<stdlib.h>
/**
*free_grid - frees a 2 dimensional grid previously created by alloc_grid
*@grid: pointer to pointer array
*@height: rows in array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}

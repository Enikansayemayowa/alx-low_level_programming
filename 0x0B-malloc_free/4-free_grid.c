#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - that frees a 2 dimensional grid
 * @grid: address of the array
 * @height: height of the array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

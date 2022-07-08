#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - free a 2D
 *@grid: grid free
 *@height: string
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);

	free(grid);
}

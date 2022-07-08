#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - retunr 2d array of int
 *@width: width the array
 *@height: height the array
 *
 * Return: pointer 2D
 */
int **alloc_grid(int width, int height)
{
	int **wh = NULL, w = 0, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	wh = malloc(sizeof(int *) * height);
	if (wh == NULL)
		return (NULL);

	for (h = 0 ; h < height ; h++)
	{
		wh[h] = malloc(sizeof(int) * width);
		if (wh[h] == NULL)
		{
			for (w = 0 ; w < width ; w++)
				free(wh[w]);

			free(wh);
			return (NULL);
		}
		for (w = 0 ; w < width ; w++)
			wh[h][w] = 0;
	}
	return (wh);
}

#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - Entry point
 *@a: pointer is type int
 *@size: is type int
 *Description: prints the sum of the two diagonals
 *of a square matrix of integers
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int o1 = 0;
	int o2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		o1 += a[i + (j * size)];
		j++;
	}
	j = size - 1;
	for (i = 0 ; i < size ; i++)
	{
		o2 += a[i + (j * size)];
		j--;
	}
	printf("%d, %d\n", o1, o2);
}


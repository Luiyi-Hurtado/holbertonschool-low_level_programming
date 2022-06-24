#include "main.h"
#include <stdio.h>

/**
 *print_array - Entry point
 *@a: pointer int
 *@n: variable is init
 */
void print_array(int *a, int n)
{
	int i = 0;
	int l = n - 1;

	for (i = 0 ; i <= l ; i++)
	{
		if (i != l)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

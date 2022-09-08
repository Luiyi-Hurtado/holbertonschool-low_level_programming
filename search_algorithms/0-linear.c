#include "search_algos.h"

/**
 *linear_search - search algorithms
 *
 *@array: the array
 *@size: size of the array
 *@value: value of the array
 *Return: -1 or index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indx = 0;

	if (array)
	{
		for (indx = 0; indx < size; indx++)
		{
			printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
			if (array[indx] == value)
			{
				return (indx);
			}
		}
	}
	return (-1);
}

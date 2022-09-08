#include "search_algos.h"

/**
 *middle - binary algorithm
 *
 *@array: array
 *@low: lowest number
 *@high: highest number
 *@size: size of array
 *@value: value of array
 *Return: int
 */
int middle(int *array, int low, int high, size_t size, int value)
{
	int middle = 0, indx = 0;

	low = 0;
	high = size - 1;

	if (array != NULL)
	{
		while (low <= high)
		{
			middle = (low + high) / 2;
			printf("Searching in array: ");
			for (indx = low; indx <= high; indx++)
			{
				if (indx == high)
					printf("%d", array[indx]);
				if (indx != high)
					printf("%d, ", array[indx]);
			}
			printf("\n");
			if (value < array[middle])
				high = middle - 1;
			if (value > array[middle])
				low = middle + 1;
			if (value == array[middle])
				return (middle);
		}
	}
	return (-1);
}

/**
 *binary_search - binary algortihm
 *
 *@array: array
 *@size: size of array
 *@value: value of array
 *Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int min = 0, max = 0;

	if (!array)
		return (-1);

	min = 0;
	max = size - 1;
	return (middle(array, min, max, size, value));
}

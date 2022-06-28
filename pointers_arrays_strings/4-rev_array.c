#include "main.h"
/**
 *reverse_array - Entry point
 *@a: pointer is type int
 *@n: is type int
 *Desription: reverse the content of an array
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		j = a[n];
		a[n] = a[i];
		a[i] = j;
	}
}

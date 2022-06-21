#include "main.h"

/**
 *swap_int - Entry point
 *@a: is to type int
 *@b: is to type int
 *Description: changes the value of the two
 *numbers
 */

void swap_int(int *a, int *b)
{
	int A = *a;

	*a = *b;
	*b = A;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*
*Description. use the source code for the print
*to a random number in the variable n and after
*if the number is greater than 0 print is positve,
*if the number is less than 0 print is negativ
*and if the number is 0 print is zero.
*
*Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	if (n == 0)
	{
		printf("%d is zerp\n", n);
	}

	return (0);
}

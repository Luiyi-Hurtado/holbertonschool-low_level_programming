#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*
*Descrption: print last number of the random number
*if last number is greater than 5 print Last digit of $n 
*is $ld and is greater than 5.
*if last number is 0 print Last digit of $n is $ld  and is 0.
*if last number is less than 6 and not 0 print Last digit
*of $n and $ld is less than 6 and not 0.
*
*Return: 0
*/

int main(void)
{
	int n, ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	ls = n % 10;
	
	if (ls > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ls);
	}

	if (ls == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ls);
	}

	if (ls < 6 && ls != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
	}
	return (0);
}

#include <stdio.h>

/**
*main - Entry point
*
*Description: Use the printf for print
*the size of various types on the computer
*
*Return: 0
*/

int main(void)
{
	char a;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size if a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}

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
	int a;

	printf("Size of a char: %d\n" sizeof(a) "byte(s)");
	printf("Size of an int: %d\n" sizeof(int) "byte(s)");
	printf("Size if a long int: %d\n" sizeof(long int) "byte(s)");
	printf("Size of a long long int: %d\n" sizeof(long long int) "byte(s)");
	printf("Size of a float: %d\n" sizeof(float) "byte(s)");

	return (0);
}

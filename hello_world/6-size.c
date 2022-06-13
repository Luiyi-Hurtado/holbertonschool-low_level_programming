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

	printf("Size of a char: " sizeof(a) "byte(s)");
	printf("Size of an int: " sizeof(int) "byte(s)");
	printf("Size if a long int:" sizeof(long int) "byte(s)");
	printf("Size of a long long int: " sizeof(long long int) "byte(s)");
	printf("Size of a float: " sizeof(float) "byte(s)");

	return (0);
}

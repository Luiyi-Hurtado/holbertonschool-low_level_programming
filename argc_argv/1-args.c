#include <stdio.h>
/**
 *main - prints the numbers of arg
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];

	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all arg it recevies
 *@argc: argument count
 *@argv: argument vector
 *Return: not error
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (EXIT_SUCCESS);
}

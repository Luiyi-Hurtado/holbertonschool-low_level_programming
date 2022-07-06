#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - add positive numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; j < (int)strlen(argv[i]) ; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}

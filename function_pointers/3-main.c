#include "3-calc.h"
/**
 *main - result
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int (*operation)(int, int) = NULL;
	int result = 0, a = 0, b = 0;
	char *op = NULL;

	THROW_ERROR(argc != 4, ERROR_MESSAGE, EXIT_INVALID_ARG);

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	operation = get_op_func(op);

	THROW_ERROR(operation == NULL, ERROR_MESSAGE, EXIT_NULL_OPERATOR);

	result = operation(a, b);

	printf(FORMAT_RESULT, result);

	return (EXIT_SUCCESS);
}

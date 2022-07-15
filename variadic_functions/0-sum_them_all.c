#include "variadic_functions.h"

/**
 *sum_them_all - sum of all its parameters
 *@n: fixed argument
 *
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	if (n != 0)
	{
		for (i = 0 ; i < n ; i++)
			sum += va_arg(ap, const unsigned int);
	}
	else
		return (0);

	va_end(ap);
	return (sum);
}

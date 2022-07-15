#include "variadic_functions.h"

/**
 *print_numbers - print all numbers
 *@separator: strings to be print between numbs
 *@n: integers passed to the function
 *
 *Return: always void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		int x = va_arg(ap, const unsigned int);
		printf("%d", x);
		
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}

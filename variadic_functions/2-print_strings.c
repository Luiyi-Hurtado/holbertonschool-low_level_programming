#include "variadic_functions.h"

/**
 *print_strings - print all strings
 *@separator: separator of the string
 *@n: number of strings
 *
 *Return: always void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;

	va_start(strings, n);
	for (i = 0 ; i < n ; i++)
	{
		if (n == '\0')
			printf("nil");
		printf("%s", va_arg(strings, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(strings);
	printf("\n");
}

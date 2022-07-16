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
	char *str = NULL;

	va_start(strings, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(strings);
	printf("\n");
}

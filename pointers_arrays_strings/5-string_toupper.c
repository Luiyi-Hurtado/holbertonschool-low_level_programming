#include "main.h"

/**
 * string_toupper - Entry point
 * @c: pointer is type char
 * Description: changes all lowercase
 * letters of a string to uppercase
 * Return: string to uppercase
 */
char *string_toupper(char *c)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		j++;
	}
	for (i = 0 ; i < j ; i++)
	{
		if (c[i] >= 95 && c[i] <= 122)
		{
			c[i] -= 32;
		}
	}
	return (c);
}



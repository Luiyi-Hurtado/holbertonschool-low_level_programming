#include "main.h"
/**
 *leet - Entry point
 *@c: pinter is a char
 *Description: encodes a string into leet(1337)
 *Return: string in the leet
 */
char *leet(char *c)
{
	int i = 0;
	int j = 0;
	char letter[] = "aAeEoOtTlL";
	char replace[] = "43071";

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		for (j = 0 ; letter[j] ; j++)
		{
			if (c[i] == letter[j])
			{
				c[i] = replace[j / 2];
			}
		}
	}
	return (c);
}

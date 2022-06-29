#include "main.h"
/**
 * _sptrspn - Entry point
 *@s: pointer is type char
 *@accept: pointer is type hcar
 *Description: length of a prefix substring
 *Return: substring length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int k = 0;

	for (i = 0 ; accept[k] != '\0' ;)
	{
		for (k = 0 ; accept[k] != '\0' ; k++)
		{
			if (accept[k] == s[i])
			{
				i++;
				break;
			}
		}
	}
	return (i);
}

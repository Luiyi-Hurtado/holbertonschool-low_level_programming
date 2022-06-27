#include "main.h"

/**
 *_strncpy - Entry point
 *@dest: pointer is a character
 *@src: pointer is a character
 *@n: pointer is a integer
 *Description: copies a string
 *Return: copie string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	for (i = 0 ; i < n ; i++)
	{
		if (src[i] == '\0')
		{
			l = 1;
		}
		if (l == 0)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

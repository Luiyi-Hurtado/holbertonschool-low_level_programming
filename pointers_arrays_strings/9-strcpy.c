#include "main.h"

/**
 *_strcpy - Entry point
 *@dest: pointer is char
 *@src: pointer is char
 *Return: copy string in dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0 ; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

#include "main.h"
/**
 *_memcpy - Entry point
 *@dest: pointer is char
 *@src: pointer is char
 *@n: is to insigned int
 *Description:
 *Return: copie the src in dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

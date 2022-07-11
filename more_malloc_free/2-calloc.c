#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - malloc for an array
 *@nmemb: num of memory
 *@size: size of array
 *
 *Return: allocted array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mallo;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mallo = malloc(nmemb * size);
	if (mallo == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		mallo[i] = 0;

	return (mallo);
}

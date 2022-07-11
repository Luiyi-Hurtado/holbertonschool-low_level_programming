#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *malloc_checked - use malloc
 *@b: malloc
 *
 * Return: allocate b
 */
void *malloc_checked(unsigned int b)
{
	void *mallo;

	mallo = malloc(b);
	if (mallo == NULL)
		exit(98);

	return (mallo);
}

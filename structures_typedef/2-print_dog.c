#include "dog.h"
#include <stdio.h>

/**
 *print_dog - print info about the dog
 *@d: pointer struct the dogs
 *
 *return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("%s\n", (*d).name);
		else
			printf("Name: (nil)");

		printf("%.6f\n", (*d).age);

		if ((*d).owner != NULL)
			printf("%s\n", (*d).owner);
		else
			printf("Name : (nil)");
	}
}

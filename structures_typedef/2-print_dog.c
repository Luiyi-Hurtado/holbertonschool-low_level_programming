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
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\0");

		printf("Age: %.6f\n", (*d).age);

		if ((*d).owner != NULL)
			printf("Name: %s\n", (*d).owner);
		else
			printf("Name: (nil)\0");
	}
}

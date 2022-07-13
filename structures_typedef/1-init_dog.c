#include "dog.h"

/**
 *init_dog - dogs information
 *@d: pointer of struct dog
 *@name: pointer name dog
 *@age: age of the dog
 *owner: pointer owner dog
 *
 *Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

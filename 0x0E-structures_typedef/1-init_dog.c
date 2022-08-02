#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes dog profile
 * @d: struct contais dog profile
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

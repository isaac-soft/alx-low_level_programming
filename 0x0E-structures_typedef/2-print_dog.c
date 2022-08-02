#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -print dog details
 * @d: -dog profile
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("Dog profile is empty");

	printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
	printf("Age: %f\n", (d->age == 0 ? 0 : d->age));
	printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
}

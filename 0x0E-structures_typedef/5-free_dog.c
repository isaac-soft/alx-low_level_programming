#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated to dog
 * @d: parameter
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}

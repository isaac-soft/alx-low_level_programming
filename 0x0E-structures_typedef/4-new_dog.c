#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;
	
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}	

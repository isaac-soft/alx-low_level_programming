#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - profile for new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: (NULL) faiure (new_dog) Success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

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

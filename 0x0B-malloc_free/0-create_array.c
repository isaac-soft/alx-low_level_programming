#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and intializes
 * ...............initializes it with a specific char
 * @size: size of array
 * @c: specific char
 *
 * Return: NULL(if size = 0 or code fails)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL) /* if (array [0] == '\0') */
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

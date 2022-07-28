#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * ..........which contains a copy of the string given as parameter.
 *
 * @str: parameter to be copied
 *
 * Return: NULL (fail) Pointer (success)
 */
char *_strdup(char *str)
{
	char *array;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	array = malloc(i * sizeof(*array) + 1);
	if (array == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		array[c] = str[c];
	array[c] = '\0';

	return (array);
}

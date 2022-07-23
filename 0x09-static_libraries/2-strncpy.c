#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - copy strings
 * @dest: destination variable
 * @src: source variable
 * @n: counter
 * Return: returns the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

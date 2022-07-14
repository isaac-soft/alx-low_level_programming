#include "main.h"
#include <string.h>

/**
 * _strncat -concatenates two string
 * @dest: destination variable
 * @src: source variable
 * @n: number of bytes
 * Return: Returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}

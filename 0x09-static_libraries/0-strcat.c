#include "main.h"
#include <string.h>

/**
 * _strcat - concateneates two strings
 * @dest: destination variable
 * @src: source variable
 *
 * Return: returns the concatenatino result
 */

char *_strcat(char *dest, char *src)
{
	char *cat;

	cat = strcat(dest, src);
	return (cat);
}

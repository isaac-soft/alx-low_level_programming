#include "main.h"
#include <string.h>

/**
 * _strcpy - copeis string via pointer
 * @dest: -parameter expecting value
 * @src: - parameter being copied
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

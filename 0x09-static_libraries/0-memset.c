#include "main.h"

/**
 * _memset - replaces the first n bytes of membory areai
 * @s:pointer of type char
 * @b: variable of type char
 * @n: variable of unsigned int n
 *
 * Return: 1 (success) 0 failure)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

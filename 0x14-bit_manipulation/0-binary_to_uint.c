#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, base; /* track sum and base two power */
	int len; /* length of string */

	/* check if pointer location is NULL */
	if (b == NULL)
	{
		return (0);
	}

	/* count length of string pointed to */
	for (len = 0; b[len] != '\0'; len++)
	{
		/* check if string is valid */
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (base = 1, sum = 0, len--; len >= 0; len--, base *= 2)
	{
		/* using bits of 1 only */
		if (b[len] == '1')
			sum += base;
	}

	return (sum);
}

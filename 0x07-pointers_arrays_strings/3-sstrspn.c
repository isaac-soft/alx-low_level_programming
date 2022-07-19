#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched.
 * @accept: the prefix to be measured.
 *
 * Return: The number of bytes in s which
 *  consist only of bytes from accept.A101-infine te tem 103 add.c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bytes++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}

	return (bytes);
}

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 *
 * Return: s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, checker;

	for (i = 0; s[i] != '\0'; i++)
	{
		checker = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				checker = 1;
				break;
			}
		}
		if (checker == 0)
			break;
	}
	return (i);
}

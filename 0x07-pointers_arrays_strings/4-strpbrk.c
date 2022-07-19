#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: pointe(byte found)r or NULL(no byte found)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, checker;

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
		if (checker == 1)
			break;
	}
	if (s[i] == '\0')
		return ('\0');
	return (s + i);
}

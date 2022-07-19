#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: - first parameter being searched
 * @needle: - second parameter (substring)
 *
 * return: pointer(if substring) null (no substring)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, checker;

	checker = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				checker = 1;
				break;
			}
			else
				checker = 0;
		}
	}

	if (checker == 1)
		for (i = 0; haystack [i] != '\0'; i++)
		{
			if (haystack[i] == needle[1])
				return (haystack + i);
		}
	else if (checker == 0)
	{
		return (0);
	}
}

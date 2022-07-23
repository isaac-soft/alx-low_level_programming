#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first variable
 * @s2: second variable
 *
 * Return: s1 < s2 (-1), s1 = s2 (0), s1 > s2 (1)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '0' && s2[i] != '0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

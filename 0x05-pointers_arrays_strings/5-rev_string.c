#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	unsigned int i, length;
	char temp;

	length = strlen(s) - 1;
	for (i = 0; i < strlen(s) / 2; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length--] = temp;
	}
}

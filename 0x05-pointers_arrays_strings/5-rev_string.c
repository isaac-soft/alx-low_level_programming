#include "main.h"
#include <string.h>

/**
 * print_rev -prints string in reverse order
 * @c: parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	unsigned int i, length;
	char temp;

	length = strlen(s) - 1;
	for (i = 0; i < strlen(s)/2; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length--] = temp;
	}
}

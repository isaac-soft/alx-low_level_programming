#include "main.h"
#include <stdio.h>

/**
 * string_toupper - convets sting to uper
 * @str: - parameter
 *
 * Return: returns type char
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

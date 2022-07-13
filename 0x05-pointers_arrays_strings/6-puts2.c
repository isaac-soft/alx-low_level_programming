#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 -this prints every character of a string per line
 * @str: parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

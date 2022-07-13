#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of a string
 * @str: parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	if (strlen(str) % 2 == 0)
	{
		unsigned int i;

		for (i = strlen(str) / 2; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		unsigned int i, n;

		n = (strlen(str) - 1) / 2;
		for (i = strlen(str) - n; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

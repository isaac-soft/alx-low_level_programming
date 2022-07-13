#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string
 * @str: -only parameter
 *
 * Return: void
 */

void _puts(char *str)
{
	unsigned int i;

	/*printf("%lu", strlen(str));*/
	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	/* puts(str);  uses the stdio.h but not accpeted for this task*/
}

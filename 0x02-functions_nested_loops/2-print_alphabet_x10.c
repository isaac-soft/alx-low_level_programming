#include "main.h"
/**
 * print_alphabet_x10 -prints all the lower case 10x 
 * separated by a new line
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}

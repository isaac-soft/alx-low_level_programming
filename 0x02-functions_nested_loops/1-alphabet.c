#include "main.h"

/**
 * print_alphabet - Printall the lower case alphabets
 * _putchar - prints by calling this method
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

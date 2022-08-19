#include "main.h"

/**
 * print_binary- prints binary equivalent of a number
 * @n: number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/* bitwise operations for positive n */
	if (n > 1)
		print_binary(n >> 1); /* recursive iteration */

	_putchar((n & 1) + '0');
}

#include "main.h"

/**
 * print_triangle - this print n-size triangles
 * @size: accept the size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}

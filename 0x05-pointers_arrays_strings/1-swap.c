#include "main.h"

/**
 * swap_int - this function swap the values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

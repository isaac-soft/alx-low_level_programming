#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an array
 * @a: parameter
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

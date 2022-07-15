#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter
 * @n: length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}

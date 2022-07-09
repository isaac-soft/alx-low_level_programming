#include "main.h"

/**
 *
 *
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 1)
	{
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		int j, k;

		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_number -prints an integer.
 * @n: input paramete
 * Return: no return
 */

void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if (m < 10)
		_putchar(m % 10 + '0');
	else if (m >= 10)
	{
		/*_putchar(m % 10 + '0');*/
		print_number(m / 10);
		_putchar(m % 10 + '0');
	}
}

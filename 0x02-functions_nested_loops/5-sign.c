#include "main.h"
/**
 * print_sign - checks for the sign of a number
 * Description - This program checks if a sign is + or -
 *
 * @n: this parameter receives the arguments assed
 * Return: 1 (positive) 0 (Zero) -1 (negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

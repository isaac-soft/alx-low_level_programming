#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * Description - Use absolute function to make checkeasy
 * @c: accepts the arguments to be checked
 *
 * Return: Returns the last digit
 */

int print_last_digit(int c)
{
	int r;

	r = abs(c);
	r = r % 10;
	_putchar(r + '0');

	return (r);
}

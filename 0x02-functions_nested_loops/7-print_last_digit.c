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
	c = abs(c);
	c = c % 10;
	_putchar(c + '0');

	return (c);
}

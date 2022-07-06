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

	if (c % 10 != 0)
	{
		c = c % 10;
		return (c);
	}
	else
	{
		return (0);
	}
}

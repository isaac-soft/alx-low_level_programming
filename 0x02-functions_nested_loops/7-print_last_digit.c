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



	if (n < 0)

	{

		r = -1 * (n % 10);

		_putchar(r + '0');

		return (r);

	}

	else

	{

		r = n % 10;

		_putchar(r + '0');
		return (r);
	}
}

		return (r);

	}
	c = abs(c);
	c = c % 10;
	_putchar(c + '0');

	return (c);
}

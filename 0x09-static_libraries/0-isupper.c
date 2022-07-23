#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercas
 * @c: parameter
 *
 * Return: 0 (success) 1 (false)
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit -checks for digit
 * @c: parameter to check
 * 
 * Return: 1 (success) 0 (fail)
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
		return (0);
}

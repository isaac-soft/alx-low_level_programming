#include <ctype.h>
#include "main.h"
/**
 * _islower - check for lowercase alphabets
 *@c - unsigned integer
 *
 * Return: 1 (sucess) 0 (failure)
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}

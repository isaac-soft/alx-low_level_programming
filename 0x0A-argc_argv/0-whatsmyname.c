#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: counts the number of command line arguments
 * @argv: an array of commond line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
		return (1);
	return (0);
}

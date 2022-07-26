#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: counts the command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0(success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	else
		return (1);
	return (0);
}

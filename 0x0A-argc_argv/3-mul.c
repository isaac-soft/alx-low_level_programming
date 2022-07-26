#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two comman-line arguments followed by a new line
 * @argc: stores the number of command-line arguments
 * @argv: array of command-line arguments.
 *
 * Return: 1(error) 0 (success)
 */

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

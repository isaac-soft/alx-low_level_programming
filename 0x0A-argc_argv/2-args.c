#include "main.h"
#include <stdio.h>

/**
 * main - prints all command-line arguments
 * @argc: counts command-line arguments
 * @argv: array of command-line arguements
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	/* check if arguments is greater than 1 */
	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
		return (1); /* exit failure status */
	return (0); /*exit success status */
}

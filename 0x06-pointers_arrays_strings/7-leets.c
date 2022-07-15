#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string in 1337
 * @str: parameter
 * Return: 1(success) 0 (fail_
 */

char *leet(char *str)
{
	int i, j;
	char code[5] = "aeotl";
	char ncode[5] = "43071";

	for (i = 0; i != '\0'; i++)
	{
		printf("%d\t", str[i]);
		for (j = 0; j != '\0'; j++)
		{
			if (code[j] == str[i] || (code[j] - 32) == str[i])
			{
				printf("%d\t", str[i]);
				str[i] = ncode[j];
			}
		}
	}
	return (str);
}

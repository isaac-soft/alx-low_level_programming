#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize string after separator
 * @str: - parameter
 *
 * Return: 1 (success) 0 (fail)
*/
int separator(char str)
{
	unsigned int i;
	char delimeter[] = " \t\n,;.!?\"(){}";
	
	for (i = 0; i < sizeof(delimeter); i++)
	{
		if (delimeter[i] == str)
			return (1);
		else
			return (0);
	}
/*	
char *cap_string(char *)
 {
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (separator(str[i]) == 1)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] -32;
				i++;
			}
		}
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
/**
  * main -main block
  * Description: Print all possible combinations for single-digit nubers.
  * Nubers msust be separaed by commas and a aspace
  * You can only use putchar' to print to console
  * You can only use 'putchar up to four times.
  * You care no allowed to use andy variable of type 'char'.
  * Return: 0
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

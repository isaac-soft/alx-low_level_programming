#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  * main -main block
  * Descripton: print all numers of base 10, starting from 0.
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}

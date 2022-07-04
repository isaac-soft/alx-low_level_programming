#include <stdio.h>
/**
  * main -main block
  * Description: prints all single digit nubers of base 10
  * starting from 0, foloowed y a new line.
  * Return: 0
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}

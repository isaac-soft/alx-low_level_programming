#include <stdio.h>
/**
  * main -main block
  * Descritpon: Print all possible cobinations of atwo digits
  * Nubers must be separated by commas and as space
  * 01 and 10 are consideed as the same combination of two digints
  * Print only t he smallest combination of two diits.
  * Nubers should be printed in ascending order, with two dits.
  * YOu can only use 'putchar'.
  * You can only use 'putchar' upt to 5 times.
  * YOu are not allowed to sue andy variable of type 'char'
  * Return: 0
  */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 100)
	{
		j = i % 10; /*singles digit */
		k = i / 10; /* doubles digit */
		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

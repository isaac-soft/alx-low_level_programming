#include <stdio.h>
/**
 * main - prints natural numbers less than 1024
 * this numbers mubt be multiples of 3 or 5
 * Return: 0(success)
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}

#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description - it starts from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	char i, j, k;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}

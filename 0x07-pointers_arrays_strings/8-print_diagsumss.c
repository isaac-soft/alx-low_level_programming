#include "main.h"
#include "stdio.h"

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		sum1 += *a[i][j];
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			sum2 += *a[i][j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elments of arry of integers
 * @a: brings the array to the funciton
 * @n: is the number of elements to be printerd
 */

void print_array(int *a, int n)
{
	int i;

	for (i =0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

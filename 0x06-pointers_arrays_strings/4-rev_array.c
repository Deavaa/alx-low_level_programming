
include "main.h"

/**
 * reverse_array - reverse the content of an int array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

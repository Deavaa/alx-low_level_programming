#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: new array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return ('\0');

	j = (max - min) + 1;
	arr = malloc(sizeof(int) * j);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < j; i++)
		arr[i] = min + i;

	return (arr);
}

#include "main.h"

/**
 * clear_bit - set a bit to 0
 * @n: the no.
 * @index: positon
 * Return: 1 in success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

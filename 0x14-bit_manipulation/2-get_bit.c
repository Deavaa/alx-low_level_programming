#include "main.h"

/**
 * get_bit - return a bit
 * @n: number
 * @index: position
 * Return: the result bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
	{
		return (-1);
	}
	b = n >> index;
	return (b & 0x1);
}

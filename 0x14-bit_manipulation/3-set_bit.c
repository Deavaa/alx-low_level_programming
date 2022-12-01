#include "main.h"

/**
 * set_bit - sets valu to specific bit index
 * @n: pointer to the bit
 * @index: the postion
 * Return: 1 in success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}

#include "main.h"

/**
 * flip_bits - the number of bits need to flip to get from one number to another
 * @n: number
 * @m: compare
 * Return: no. diff
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}

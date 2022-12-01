#include "main.h"

/**
 * print_binary - decial to binary
 * @n: decimal number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int j = 1;

	j <<= 63;
	if (n == 0)
	{
		_putchar('0');
	}
	while (j > 0)
	{
		if ((n & j) == 0 && i ==1)
		{
			_putchar('0');
		}
		else if ((n & j) != 0)
		{
			_putchar('1');
			i = 1;
		}
		j = j >> 1;
	}
}

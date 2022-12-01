#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary no.
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0;
	int i, j;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		;
	}
	for (j = 0; j != i; j++)
	{
		if(b[i - j - 1] == '1')
		{
			n += 1 << j;
		}
		else if(b[i - j - 1] != '0')
		{
			return (0);
		}
	}
	return (n);
}

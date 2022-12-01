#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 little 0 big indian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *)&i;

	if (*ch)
	{
		return (1);
	}
	return (0);
}

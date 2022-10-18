#include "main.h"

/**
 * print_to_98 print numbers from n to 98
 * @n: get the starting number
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--0)
		{
			printf("%d, ",n);
		}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for(; n <= 98; n++)
		{
			printf("%d, ",n);
		}
	}
	}

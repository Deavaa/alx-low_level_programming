#include "main.h"

/**
 * print_last_digit - Entry point
 *@i:brings the number to function
 * Return : last digit
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}

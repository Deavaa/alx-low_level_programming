#include "main.h"

/**
 * print_last_digit - Entry point
 *@i:brings the number to function
 * Return : last digit
 */

int print_last_digit(int i)
{
	int res;

	if (i < 0)
	{
		i = i * -1;
	}
	res = i % 10;
	_putchar(res + '0');
	return (res);
}

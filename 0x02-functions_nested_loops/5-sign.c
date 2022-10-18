#include "main.h"

/**
 * print_sign - print the sing of number
 * @n: bring the value to the function
 * Return: 1 and print + if n is greater than 0
 * Return 0 and print 0 if n is zero
 * Return -1 and print - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}

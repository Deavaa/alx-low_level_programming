#include "main.h"

/**
 * print_rev - print the string characters n reverse order
 * @s birng the original string
 */

void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}

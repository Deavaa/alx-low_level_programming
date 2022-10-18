#include "main.h"

/**
 * print alphabet - Entry Point
 *
 * Return:0 Always (Success)
 */

print_aplphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar (ch);
		ch++;
	}
	_putchar ('\n');
	return (0);
}


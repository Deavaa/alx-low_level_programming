#include "main.h"

/**
 * main - Entry Point
 *
 * Return:0 Always (Success)
 */

int aplphabet(void)
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


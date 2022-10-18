#include "main.h"

/**
 * print alphabet - Entry Point
 *
 * Return:void Always (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar (ch);
		ch++;
	}
	_putchar ('\n');
}


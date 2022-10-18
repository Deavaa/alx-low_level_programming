#include "main.h"

/**
 * main - Entry Point
 *
 * Return Always : 0 (Success)
 */

int main(void)
{
	char var[]="_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar (var[i]);
	}
	_putchar ('\n');
	return (0);
}

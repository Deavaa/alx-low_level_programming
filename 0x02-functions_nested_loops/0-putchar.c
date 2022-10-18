#include <main.h>

/**
 * main - Entry Point
 *
 * Return Always : 0 (Success)
 */

int mian(void)
{
	char [] var="_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar (var[i]);
	}
	putchar ('\n');
	return (0);
}

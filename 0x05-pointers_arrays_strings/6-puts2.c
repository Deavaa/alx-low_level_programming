#include "main.h"

/**
 * puts2 - prints every other character
 * @s: brings the string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (1 % 2 == 0)
		{
			_putchar (s[i]);
		}
	}
	_putchar ('\n');
}

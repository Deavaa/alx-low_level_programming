#include "main.h"

/**
 * puts2 - prints every other character
 * @str: brings the string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (1 % 2 == 0)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}

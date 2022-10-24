#include "main.h"

/**
 * puts_half - prints half of the sting
 * @str: brings the hole string for porcessing
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int len = 0;
	
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = (len - 1) / 2; j < len; j++)
	{
		_putchar (str[j]);
	}
	_putchar('\n');
}



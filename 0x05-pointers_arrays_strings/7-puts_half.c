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
	int hlen;
	
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		hlen = len / 2;
	}
	else
	{
		hlen = ((len - 1) / 2) + 1;
	}
	for (j = hlen; j < len; j++)
	{
		_putchar (str[j]);
	}
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar (x + '0');
		if(x != 9)
		{
		putchar (',');
		putchar (' ');
		}
		x++;
	}
	putchar ('\n');
	return (0);
}

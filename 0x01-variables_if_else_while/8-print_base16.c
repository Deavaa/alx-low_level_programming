#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return:0 Always (Success)
 */

int main(void)
{
	int d = '0';

	char ch = 'a';

	while(d < '10')
	{
		putchar (d);
		d++;
	}
	while(ch <= 'f')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}

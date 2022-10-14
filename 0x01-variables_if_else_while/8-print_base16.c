#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return:0 Always (Success)
 */

int main(void)
{
	char d = '0';

	char ch = 'a';

	while(d < 10)
	{
		putchar (d+'0');
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

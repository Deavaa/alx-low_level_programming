#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char ch='0';
	
	while (ch <= '9')
	{
		putchar (ch);
		putchar (',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}

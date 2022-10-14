#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:0 Always (Success)
 */
int main(void)
{
	char ch = 'z';

	do {
		putchar (ch);
		ch--;
	} while (ch > 'a');
	putchar ('\n');
	return (0);
}

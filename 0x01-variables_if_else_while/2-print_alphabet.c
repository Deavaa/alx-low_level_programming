#include <stdlib.h>

/**
 * mian - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char ch='a';
	do
	{
		putchar(ch);
		ch++;
	}while (ch<'z');
	putchar ('\n');
	return (0);
}

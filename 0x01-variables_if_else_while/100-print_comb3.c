#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return:0 Alwasy (Success)
 */

int main(void)
{
	int i, j;

	for ( i = '0'; i <= '9'; i++)
	{
	for( j = '0'; j <= '9';j++)
		{
		if(i < j)
		{

		putchar (i);
		putchar (j);
		putchar (' ');
		putchar ('\n');
		}
		}
	}
return (0);
}

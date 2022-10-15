#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return:0 Alwasy (Success)
 */

int main(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		for(char j = '0'; j <= '9';j++)
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

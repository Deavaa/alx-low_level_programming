#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 * Return:0 Always (Success)
 */
int main(void)
{
	int x,y,z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				putchar (x);
				putchar (y);
				putchar (y);
				if (! (x == '7' && y == '8'; && z == '9'))
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
}
		


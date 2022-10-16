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
		for (y = '1'; y <= '8'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if (x == y || x == z || y==z)
				{
					continue ();
				}
				putchar (x);
				putchar (y);
				putchar (z);
				if (! (x == '7' && y == '8' && z == '9'))
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
		


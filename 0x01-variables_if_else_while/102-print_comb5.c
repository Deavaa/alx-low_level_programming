#include <stdio.h>

/**
 * mian - Entry Point
 *
 * Return:0 Always (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i <= j)
			{
				putchar (i/10);
				putchar (i%10);
				putchar (' ');
				putchar (j/10);
				putchar (j%10);
				if(!(i == 98 && j == 99)
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

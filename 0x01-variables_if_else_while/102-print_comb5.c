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
				putchar ((char)(i/10));
				putchar ((char)i%10);
				putchar (' ');
				putchar ((char)j/10);
				putchar ((char)j%10);
				if (!(i == 98 && j == 99))
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

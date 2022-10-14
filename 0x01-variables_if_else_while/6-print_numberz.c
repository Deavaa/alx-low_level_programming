#include <stdio.h>

/**
 * main - Entry Point 
 *
 * Return:0 Alwasy (Sucess)
 */

int main (void)
{
	int x=0;
	
	while (x < 10)
	{
		putchar ( (char) x);
		x++;
	}
	putchar ('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_chessboar - print chessboard
 * @a: dimension
 * Return: noting
 */

void print_chessboard(char (*a)[8])
{
	char *ch = {{'r','k','b','q','n','k','b','r'},{'p','p','p','p','p','p','p','p'},{' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' '}};
	int j, k;

	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar (ch[j][k]);
			if (k != 7)
			{
				_putchar (',');
			}

		}
	}
	for (j = 3; j >= 0; j--)
	{
		for (k = 7; k >= 0; k--)
		{
			if ((ch[j][k] >= 'a' || ch[j][k] <= 'm') && ch[j][k] != ' ')
			{
				_putchar (ch[j][k] + 13);
			}
			else if ((ch[j][k] > 'm') && ch[j][k] != ' ')
			{
				_putchar (ch[j][k] - 13);
			}
			else
			{
				_putchar (ch[j][k]);
			}
			if (k != 0)
			{
				_putchar (',');
			}
		}
	}
}


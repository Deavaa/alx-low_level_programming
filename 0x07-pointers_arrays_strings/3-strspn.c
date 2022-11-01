#include "main.h"

/**
 * _strspn -get the lnegeth
 * @s: where
 * @accept: acceoted cgars
 * Return: length of occurce
 */

unsigned int _strspn(char *s, char *accept)
{
	char txt = accept;
	unsigned int i = 0;

	while (*s++)
	{
		while (*accept++)
			if (*(--s) == *(--accept))
			{
				c++;
				break;
			}
			if (!(*--acept))
			{
				break;
			}
				accept = txt;
			return (c);
	}
}

#include "main.h"

/**
 * _strspn -get the lnegeth
 * @s: where
 * @accept: acceoted cgars
 * Return: length of occurce
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}

#include "main.h"

/**
 * rot13 - cypher text with rot13
 * @ch: get the plain text
 * Return: cyphered text
 */

char *rot13(char *ch)
{
	int i;
	for (i = 0; ch[i] != '\0' && ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')); i++)
	{
			if((ch[i] >= 'a' && ch[i] <= 'm') || (ch[i] >= 'A' && ch[i] <= 'M'))
			{
				ch[i] += 13;
			}
			else
			{
				ch[i] -= 13
			}
	}
}

#include "main.h"

/**
 * string_toupper - convert lower case to upper
 *@ch: bring the stinrg
 * Return: the new string
 */

char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}

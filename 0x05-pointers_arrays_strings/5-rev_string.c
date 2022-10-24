#include "main.h"

/**
 * rev_string - revrse the string array
 * @s: brings the original string
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;

	while (s[len] != '\0')
	{
		len++;
	}
	char ch[len];

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		ch[i] = s[j];
	}
	s = ch;
}

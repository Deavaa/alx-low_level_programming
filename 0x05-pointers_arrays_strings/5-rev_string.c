#include "main.h"

/**
 * rev_string - revrse the string array
 * @s: brings the original string
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char tmp1, tmp2;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1, j = 0; i > j; i--, j++)
	{
		tmp1 = s[i];
		tmp2 = s[j];
		s[i] = tmp2;
		s[j] = tmp1;
	}
}

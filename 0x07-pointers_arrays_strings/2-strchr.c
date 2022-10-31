#include "main.h""
#include <stdio.h>

/**
 * _strchr - find a character
 * @s: input string array
 * @c: input character to be searched
 * Return: the pointer or null
 */

char *_strchr(char *s, char c)
{
	int i, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _strchr - find a character
 * @s: input string array
 * @c: input character to be searched
 * Return: the pointer or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

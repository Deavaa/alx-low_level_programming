#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: -15 0 or 15
 */

int _strcmp(char *s1, char *s2)
{
	x = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
	{
		x = *s1 - *s2;
	}
	return (x);
}


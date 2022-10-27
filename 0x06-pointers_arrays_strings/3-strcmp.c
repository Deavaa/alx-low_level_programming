#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: -15 0 or 15
 */

int _strcmp(char *s1, char *s2)
{
	int i, x = 0;

	for (i = 0; *s1 == *s2 && s1[i] != '\0'; i++)
	{
		x = s1 - s2;
	}
	return (x);
}


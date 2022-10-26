#include "main.h"

/**
 * _strncat -  concatinate two strings with number of charactrs with
 * @dest: first string and destination
 * @src: the second text
 * @n: number of characters frome src
 * Return: the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; src[j] != src[n]; i++, j++)
	{
		dest [i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}


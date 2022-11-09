#include "main.h"

/**
 * _strncpy - copy string from one var to another
 * @dest: destination var
 * @src: te soucrce string
 * @n: number of characters to be copy
 * Return: the destination vvariable
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

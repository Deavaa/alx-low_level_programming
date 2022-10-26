#include "main.h"

/**
 * _strncpy - copy string from one var to another
 * @dest: destination var
 * @src: te soucrce string
 * @n: number of ch aracters to be copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	fori (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strncpy - copy string from one var to another
 * @dest: destination var
 * @src: te soucrce string
 * @n: number of characters to be copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0;i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

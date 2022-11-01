#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinantion pointer
 * @src: source pointer
 * @n: bytes
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
  
	for (i = n - 1; i >= 0; i--)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinantion pointer
 * @src: source pointer
 * @n: bytes
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, int n)
{
	n--;
	for (; n >= 0; n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}

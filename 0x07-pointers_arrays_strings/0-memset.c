#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: memory area pointer
 * @b: constant bite
 * @n: number of bytes
 * Return: array of memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n >= 0; --n)
	{
		s[n] = b;
	}
	return (s);
}

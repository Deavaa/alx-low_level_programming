#iclude "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: memory area pointer
 * @b: constant bite
 * @n: number of bytes
 * Return: array of memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

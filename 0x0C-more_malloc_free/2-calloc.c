#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: array of elements
 * @size: size
 * Return: pointer to the memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	ch = m;
	for (i = 0; i < (size * nmemb); i++)
		ch[i] = '\0';

	return (m);
}

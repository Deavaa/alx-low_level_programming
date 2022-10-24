#include "main.h"

/**
 * _strcpy - copy the sting 
 * @src: source pointer
 * @dest: destination pointer
 * Return: the pointer to destinantion
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while ( src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

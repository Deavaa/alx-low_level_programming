#include "main.h"

/**
 * _strlen_p - returns length
 *
 * @s: brings text
 * Return: length of text
 */

int _strlen_p(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_p(++s));
	}
}

#include "main.h"

/**
 * _islower - Entiry Point
 *c: carry in the value
 * Return: 1 if lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


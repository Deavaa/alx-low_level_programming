#include "main.h"

/**
 * _isalpha check fo ralphabetic characters
 * @c:bring the value to the function
 * Return:1 if the value is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

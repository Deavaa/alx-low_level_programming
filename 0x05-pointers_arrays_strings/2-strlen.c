#include "main.h"

/**
 * _strlen - compute the lnegth of a sting
 * @s :bring the string to the funciton
 * Returns : the length of the sting
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] !='\0'; i++)
	{
		len++;
	}
	return (len);
}

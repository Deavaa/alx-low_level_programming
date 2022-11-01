#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: text to be serached
 * @needle: find occurence
 * Return: result pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*j)
		{
			return (i);
		}
		needle = j;
		i++;
		haystack = i;
	}
	return (NULL);
}

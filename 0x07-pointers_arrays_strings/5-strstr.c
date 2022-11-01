#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: text to be serached
 * @needle: find occurence
 * Return: result pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (i);
		}
		haystack = i + 1;
	}
	return (NULL);
}

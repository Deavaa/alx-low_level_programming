#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of possibel s2 to concatinate
 * Return: pointer to the concatenated string location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news3;
	unsigned int i, j = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	news2 = malloc(sizeof(char) * (j + 1));

	if (news2 == NULL)
		return (NULL);
	
	for (;j > i; j--, n--)
		news3[j] = s2[n];

	for (;i >= 0; i--)
		news3[i] = s1[i];

	return (news3);
}

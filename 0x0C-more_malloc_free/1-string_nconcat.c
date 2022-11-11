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

	if(s1 == NULL)
		S1 = "";

	if(s2 == NULL)
		S2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	news3 = malloc(sizeof(char) * (j + 1));

	if (news3 == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		news1[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		news3[j] = s2[i];

	news3[j] = '\0';
	return (news3);
}

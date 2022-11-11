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
	char *s3;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	s3 = malloc(sizeof(char) * (l + 1));

	if (s3 == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		s3[l++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s3[l++] = s2[i];

	s3[l] = '\0';
	return (s3);
}

#include "main.h"

/**
 * leet - convert letters to numers
 * @ch: brings the string
 * Return: reuslt
 */

char *leet(char *ch)
{
	int i, j;
	char li[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for(i = 0; ch[i] != '\0'; i++)
		for(j = 0; li[j] != '\0'; j++)
		{
			if (ch[i] == li[j])
			{
				ch[i] = num[j];
			}
		}
	return (ch);
}

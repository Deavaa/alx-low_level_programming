#include "main.h"

/**
 * cap_string - capitalize each word  first letter
 * @ch: brings the string to convert
 * Return: the result string
 */

char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z' && (ch[i - 1] == '\n' || ch[i - 1] =='\t' || ch[i - 1] == ' ' || ch[i - 1] == ',' || ch[i - 1] == ';' || ch[i - 1] == '.' || ch[i - 1] == '!' || ch[i - 1] == '?' || ch[i - 1] == '"' ||ch[i - 1] == '(' || ch[i - 1] == ')' || ch[i - 1] == '{' || ch[i - 1] == '}' || i == 0))
		{
			ch[i] = ch[i] - 32;
		}
		else
		{
			ch[i] = ch[i];
		}
	}
	return (ch);
}

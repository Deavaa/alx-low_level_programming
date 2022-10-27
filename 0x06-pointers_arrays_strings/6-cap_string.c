#include "main.h"

/**
 * cap_string - capitalize each word  first letter
 * @ch: brings the string to convert
 *
 * Return: the result string
 */

char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i - 1] == ' ' || ch[i - 1] == ',' || ch[i - 1] == ';' || ch[i - 1] == '.' || ch[i - 1] == '!', ch[i - 1] == '?' || ch[i - 1] == '"' ch[i - 1] == '(' || ch[i - 1] == ')' || ch[i - 1] == '{' || ch[i - 1] == '}')
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}

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
	char *res;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122 && (ch[i - 1] == '\n' || ch[i - 1] =='\t' || ch[i - 1] == ' ' || ch[i - 1] == ',' || ch[i - 1] == ';' || ch[i - 1] == '.' || ch[i - 1] == '!', ch[i - 1] == '?' || ch[i - 1] == '"' ch[i - 1] == '(' || ch[i - 1] == ')' || ch[i - 1] == '{' || ch[i - 1] == '}' || i == 0))
		{
			res[i] = ch[i] - 32;
		}
		else
		{
			res[i] = ch[i];
	}
	return (res);
}

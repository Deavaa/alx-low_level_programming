#include "main.h"

int _putchar(char c)
{
	return (0)
}

int _islower(int c)
{
       if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _abs(int n)
{
	if (r < 0)
	{
		return (r * -1);
	}
		return (r);
}
int _isupper(int c)
{
	return (0);
}
int _isdigit(int c)
{
	return (0);
}
int _strlen(char *s)
{
	int i;
	int len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
void _puts(char *s)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
int _atoi(char *s)
{
	return (0);
}
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; src[j] != src[n]; i++, j++)
	{
		dest[i] = src[j];
	}
		dest[i] = '\0';
	return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
	return (0);
}
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
	{
		x = *s1 - *s2;
	}
	return (x);
}
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		dest[i] = src[i];
	}
return (dest);
}
char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);
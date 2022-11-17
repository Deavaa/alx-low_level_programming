#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - pirnt strings with separator
 * @separator: separator
 * @n: noumber of args
 * Retrun: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;

	for (i  0; i < n; i++)
	{
		printf("%s", (va_arg(list, char *) == NULL) ? "(nil)" : va_arg(list, char *))
			if (i !== 0 && separator != NULL)
			{
				printf("%s", separator);
			}
	}
	printf("%s", "\n");
	va_end(list);
}

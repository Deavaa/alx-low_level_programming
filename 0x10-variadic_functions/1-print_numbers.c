#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers with new line
 * @separator: separtor
 * @n: number
 * Return: nothing
 */
 
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if ((i + 1) != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("%s","\n");
	va_end(list)
}

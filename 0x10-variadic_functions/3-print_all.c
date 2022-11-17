#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all format
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				pirntf("%f", va_arg(list, float));
				break;
			case 's':
				printf("%s", va_arg(list, char*));
				break;
			default:
				continue;
		}
		i++;
	}
	printf("%s","\n");
	va_end(list);
}

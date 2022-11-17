#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the arguments
 * @n: arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_last arg;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, int);
		}
		va_end(arg);
	}
	return (sum);
}

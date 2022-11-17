#include "main.h"
#include <stdlib.h>

/***
 * print_name - prints a name
 * @name: input name
 * @f: points to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
	{
		f(name);
	}
}

#include <stdio.h>

void first(void) __attribute__((constructor));
/**
 * first - print sentence before  the main
 * Return: nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

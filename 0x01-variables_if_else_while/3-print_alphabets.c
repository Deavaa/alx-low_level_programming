#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chsmall = 'a';

	char chcaps = 'A';

	do {
		putchar (chsmall);
		chsmall++;
	} while (chsmall <= 'z');
	do {
		putchar (chcaps);
		chcaps++;
	} while (chcaps <= 'Z');
	putchar('\n');
	return (0);
}

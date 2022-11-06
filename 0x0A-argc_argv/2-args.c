#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - prints all argu
 * @argc: 1st param
 * @argv: 2nd param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

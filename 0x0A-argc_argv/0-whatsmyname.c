#include <stdio.h>
#include <stdlib.h>

/**
 * main - shows the file name
 * @argc: 1st param
 * @argv: 2nd param
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

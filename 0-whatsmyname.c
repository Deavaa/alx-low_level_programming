#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the file
 * @argc: first parameter
 * @argv: 2nd parameter
 * Return: 0
 */

int main(int argc, char **argv)
{
	whiele (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

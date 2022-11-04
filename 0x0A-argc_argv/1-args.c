#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no. of arguments
 * @argc: 1st param
 * @argv: 2nd param
 * Return: 0
 */

int main( int argc, char **argv)
{
	int val;

	for(val = 0; val < argc; val++)
	{
		*argv[val] = *argv[val];
	}
	printf(%d\n, (val - 1));
	return (0);
}

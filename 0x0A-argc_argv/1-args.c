#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no. of arguments 
 * @argc: 1st param
 * @argv: 2nd param
 * Return: 0
 */

int main(int argc, char **argv)
{
	int val;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for(val = 0; *argv; argv++, val++)
		{
			printf("%d\n"; val - 1);
		}

	return (0);
}

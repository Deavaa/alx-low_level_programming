#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of two numbers
 * @argc: no args
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

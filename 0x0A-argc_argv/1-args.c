#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no. of argu
 * @argc: 1st param
 * @argv: 2nd param
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}

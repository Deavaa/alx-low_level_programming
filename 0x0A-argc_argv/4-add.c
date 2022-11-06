#include <stdio.h>
#include <stdlib.h>

/**
 * main - add all +ve num
 * @argc: arg no
 * @argv: pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}

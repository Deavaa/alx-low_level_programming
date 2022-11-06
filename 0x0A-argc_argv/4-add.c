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
	int i;
	int res = 0;
	
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < '0' || atoi(argv[i]) > '9')
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

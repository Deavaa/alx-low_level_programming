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
	int i, res = 0;
	
	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
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

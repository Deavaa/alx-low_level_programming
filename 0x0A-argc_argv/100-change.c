#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min coin
 * @argc: amount of argu
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, n, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = 0;
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	while (n)
	{
		if (n >= 25)
			cent = 25;
		else if (n >= 10)
			cent = 10;
		else if (n >= 5)
			cent = 5;
		else if (n >= 2)
			cent = 2;
		else
			cent = 1;
		res += n / cent;
		n %= cent;
	}
	printf("%d\n", res);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * change - calculate cent chagne
 * @n: input money
 * Return: change coing
 */

int change(int n)
{
	int cent = 0;

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		cent++;
	}
	return (cent);
}

/**
 * main - print the min coin
 * @argc: amount of argu
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number;
	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		return (printf("Error\n"), 1);
	}
	printf("%d\n", calculate_cents(number));
	return (0);
}

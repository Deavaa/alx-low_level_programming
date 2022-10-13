#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int x;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Szie of an int: %i byte(s)\n", sizeof(x));
	printf("Size of a long int: %i byte(s)\n", sizeof(l));
	printf("SIze of a long long int: %i byte(s)\n", sizeof(ll));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}

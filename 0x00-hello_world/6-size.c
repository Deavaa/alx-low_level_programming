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
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Szie of an int: %lu byte(s)\n" (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("SIze of a long long int: Xlu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

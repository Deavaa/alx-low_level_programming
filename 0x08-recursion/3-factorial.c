#include "main.h"

/**
 * int factorial - factorial of a number
 * @n: get the e input number
 * Return: factorila result;
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

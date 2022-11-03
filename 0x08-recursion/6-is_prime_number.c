#include "main.h"

/**
 * is_prime_number_do - checks the prime number of given number
 * @n: the given number
 * @val: test value
 * Return: 1 if its prime 0 if not
 */

int is_prime_number_do(int val, int n)
{
	if (n < 2 || n % val == 0)
		return (0);
	else if (val > n / 2)
		return (1);
	else
		return (is_prime_number_do(val + 1, n));
}

/**
 * is_prime_number - modify the function
 * @n: the value
 * Return: modified function
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (is_prime_number_do(2, n));
}

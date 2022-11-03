#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * @val: a value to bested in recursion
 * Return: the reuslt
 */

int _sqrt_recursion(int n, int val)
{
	if ((val * val) == n)
	{
		return (val);
	}
	if (n < 0 || (val * val) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n, val + 1));
	}
}

int _sqrt_recursion_start(int n)
{
	return (_sqrt_recursion(n, 1));
}

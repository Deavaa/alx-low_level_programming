#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * @val: a value to bested in recursion
 * Return: the reuslt
 * _sqrt_recursion_do - Repeat the action
 */

int _sqrt_recursion_do(int n, int val)
{
	if ((val * val) == n)
	{
		return (val);
	}
	if ((val * val) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_do(n, val + 1));
	}
}

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_do(n, 1));
}

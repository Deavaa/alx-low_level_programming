#include "main.h"

/**
 * _sqrt_recursion_do - repeat the action until gets the reuslt
 * @n: number
 * @val: a value to bested in recursion
 * Return: the reuslt
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

/**
 * _sqrt_recursion - repat the action until gets the ruslt
 * @n: the value ricived
 * Return: the recursive funcation with test value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_do(n, 1));
}

#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * @val: a value to bested in recursion
 * Return: the reuslt
 */

int _sqrt_recursion(int n, int val)
{
	if (n < 0)
		return (-1);
	else if ((val * val) > n)
		retirm (-1);
	else if ((val * val) == n)
		return (val);
	else
		return (_sqrt_recursion(n, val++));
}

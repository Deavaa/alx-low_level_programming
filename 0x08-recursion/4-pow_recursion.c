#include "main.h"

/**
 * _pow_recursion - power result of two number 
 * @x: base value
 * @y: power value
 * Return: the power result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

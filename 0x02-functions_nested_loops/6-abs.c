#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r :brings the value to the function
 * Return:0 
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	
	return r;
}

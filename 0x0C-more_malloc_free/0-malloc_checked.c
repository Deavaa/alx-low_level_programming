#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memeory
 * @b: memory sisze
 * Return: memory pointer
 */

void *malloc_checkedunsigned int b)
{
	void *mm = malloc(b);
       if (mm == NULL)
	      exit(98);
       return (mm);
}

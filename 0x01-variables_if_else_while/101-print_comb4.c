#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 * Return:0 Always (Success)
 */
int x,y,z;
 for (x = '0'; x <= '9'; x++)
 {
 for (y = '0'; y <= '9'; y++)
 {
 for (z = '0'; z <= '9'; z++)
 {
  if (x <= '7' && y <= '8' && z <= '9')
  {
  putchar (x);
  putchar (y);
  putchar (z);
  if (!(x == '7' &&  && y == '8' && z == '9'))
  {
  putchar (',');
  putchar (' ');
  }
  }
  }
  }
  }
  putchar('\n');
  }
  

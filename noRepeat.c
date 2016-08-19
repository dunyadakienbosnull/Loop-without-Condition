/*
 * by Beyza Hilal Durak
 * 19.08.2016
 */
#include <stdio.h>

void k(void)
{
 int y;
 *(&y + 2) -=34;
}

void main(void)
{
 int x;
 x = 0;

 printf("X = %d\n", ++x);

 if(x<10)
 {
  k();
 }
}

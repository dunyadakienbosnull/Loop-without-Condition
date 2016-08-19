/* 
 * by Beyza Hilal Durak
 * 19.08.2016
 */
#include <stdio.h>

void k(void)
{
 int x;
 int static y=0;
 if(*(&y) < 1)
 {
  x = 2;
  *(&x + 2) -= 31;
  *(&y) += 1;
 }
 else
 {
  *(&x + 2) += 26 ;
 }
}

void main(void)
{
 int x,y=0;
 x = 0;
 printf("selam %d\n", y++);
 k();
 x=1;
 printf("X = %d\n", x);

}

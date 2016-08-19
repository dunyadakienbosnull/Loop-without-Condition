/*
 * =====================================================================================
 *       Filename:  print.c
 *        Created:  19-08-2016 15:02:11
 *         Author:  Hasan Huseyin Pay
 * =====================================================================================
 */

#include <stdio.h>
void k()
{ 
  static int s=0;
  int x;
  x=2;
  if(s<1){
    s++;
   *(&x+2) -= 31;
    
  }else{
  *(&x+2) += 26;
 }
}

void main(char *argc)
{
 int x,y=0;
 x=0;
 printf("selam %d\n", y++);
 k();
 x =1;
 printf("X=%d\n",x);
}

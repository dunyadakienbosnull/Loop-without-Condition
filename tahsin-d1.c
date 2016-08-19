#include <stdio.h>
void k(void)
{
int x,y;
x=2;
*(&x+2) -=34 ;
}
void main(void)
{
int x=1;
if(x<=10){
printf("Merhaba %d. Dünya\n",x);x++;
k();}
x=0;
}

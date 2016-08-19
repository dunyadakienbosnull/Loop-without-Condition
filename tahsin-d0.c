#include <stdio.h>

void k(void){
int x;
*(&x+2)-=31;
}
void main(void){
int x;
x=1;
if(x<=10){
printf("Merhaba Dünya\n");
x++;
k();
}
x=0;	
}


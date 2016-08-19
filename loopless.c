#include <stdio.h>

void k(void){
	int x;
	*(&x+2)-=31;
}

void main(void){
	int x;
	x=1;
	
	if(x<=10){
		printf("Hello world!\n");
		x++;
		k();
	}

	x=0;
	
}

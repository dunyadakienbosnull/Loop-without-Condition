#include <stdio.h>

void k(void){
	int x,y;
	static int i=0;
	x=2;
	if(i==0){	
	*(&x+2)-=31;
	i++;
	}else{	
	*(&x+2)+=26;
	}

}

void main(void){
	int x,y=0;
	x=0;
	printf("selam %d\n",y++);
	k();
	x=1;
	printf("X=%d\n",x);
}

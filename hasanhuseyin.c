/*
 * =====================================================================================
 *       Filename:  print.c
 *        Created:  19-08-2016 11:05:07
 *         Author:  Hasan Huseyin Pay
 * =====================================================================================
 */
#include <stdio.h>
void k()
{
	int x;
	*(&x +2) -=34;
}

int main(void)
{
	int i =0;

	if(i<10){
		printf("%d\n",i);
        i++;
	} else 
        return -1;
    k();
    return 0;
}

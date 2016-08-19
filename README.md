# Loop-without-Condition
Döngü ve goto ifadelere kullanmadan döngü yaratma.
## Neden ?
Base pointer ve Stack pointer kavramlarını anlamak için.
## Nasıl ?
###BEYLE
```C
#include <stdio.h>
void k(void)
{
int x;
x=2;
static int a=0;
if(a < 1){
        a++;
        *(&x+2) -=31;
}}
void main(void)
{
int x,y=0;
printf("Selam %d\n",y++);
k();
x=1;
printf("X = %d\n",x);
}


```


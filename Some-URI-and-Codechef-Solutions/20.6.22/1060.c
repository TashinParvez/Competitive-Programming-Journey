#include<stdio.h>
int main(){

float a,b,c,d,e,f;
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
int tell=0;
if(a>=0)
    tell=tell +1;
if(b>=0)
    tell=tell +1;
if(c>=0)
    tell=tell +1;
if(d>=0)
    tell=tell +1;
if(e>=0)
    tell=tell +1;
if(f>=0)
    tell=tell +1;


printf("%d valores positivos\n",tell);

return 0;
}

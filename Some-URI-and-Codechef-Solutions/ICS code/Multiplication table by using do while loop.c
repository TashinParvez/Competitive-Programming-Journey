#include<stdio.h>
int main()
{
int a ;
scanf("%d",&a);
int i=1;
do{
    printf("%d*%d=%d\n",a,i,a*i);
    i++;
}
while(i<=10);

    return 0;
}

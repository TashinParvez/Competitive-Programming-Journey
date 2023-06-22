#include<stdio.h>
int main()
{
    int a=2,sum=0;
    for(a=a;a<=100;a+=2){
        sum=sum+a;
    }
    printf("Sum= %d",sum);

    return 0;
}

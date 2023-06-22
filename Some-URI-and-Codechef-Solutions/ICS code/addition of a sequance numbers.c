#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter first number. Condition first number have to be smaller than last number. ");
    scanf("%d",&a);
    printf("Enter Last number ");
    scanf("%d",&b);
    for(a=a;a<=b;a++){
        sum=sum+a;
    }
    printf("Sum= %d",sum);

    return 0;
}

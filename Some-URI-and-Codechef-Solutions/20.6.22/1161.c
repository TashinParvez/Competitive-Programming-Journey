#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,num2);
    int fac1=1,fac2=1;
/*
    if(num1==0)
        fac1=1;
    if(num2==0)
        fac2=1;
*/
    for(int i=1; i<=num1; i++)
    {
        fac1=fac1*i;
    }
    for(int j=1; j<=num2; j++)
    {
        fac2=fac2*j;
    }

    double sum;
    sum=(double)(fac1+fac2);
    printf("%lf",sum);
    return 0;
}

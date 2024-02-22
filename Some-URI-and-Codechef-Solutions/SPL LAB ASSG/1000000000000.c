#include<stdio.h>

void callingfunction(int a,int b,int c,int n)
{
    for(int i=4; i<=n; i++)
    {
        int d=c;
        printf("%d ",c = (a+b+c)/c);
        a=b;
        b=d;
    }
}

int main()
{
    printf("Enter Range: ");
    int n;
    scanf("%d",&n);

    printf("Enter 1st Number: ");
    int a;
    scanf("%d",&a);
    printf("Enter 1st Number: ");
    int b;
    scanf("%d",&b);
    printf("Enter 1st Number: ");
    int c;
    scanf("%d",&c);

    callingfunction(a,b,c,n); // calling function

    return 0;
}


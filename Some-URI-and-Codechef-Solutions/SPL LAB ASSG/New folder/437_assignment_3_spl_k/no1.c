#include<stdio.h>

void series(int a,int b,int c,int n)
{
    for(int i=4; i<=n; i++)
    {
        int temp=c;
        printf("%d ",c = (a+b+c)/c);
        a=b;
        b=temp;
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
    printf("Enter 2ndt Number: ");
    int b;
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    int c;
    scanf("%d",&c);

    series(a,b,c,n); // calling function

    return 0;
}


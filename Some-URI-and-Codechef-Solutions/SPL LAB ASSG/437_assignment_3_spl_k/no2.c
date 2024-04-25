#include<stdio.h>

void series(int a,int b,int c,int n,int i)
{

    if(i<=n)
    {
        int temp=c;
        printf("%d ",c = (a+b+c)/c);
        a=b;
        b=temp;
        i++;
        series(a,b,c,n,i);
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

    series(a,b,c,n,4); // calling function

    return 0;
}


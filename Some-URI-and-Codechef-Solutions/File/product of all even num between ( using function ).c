#include<stdio.h>
void funcEven(int a,int n,int *p)
{
    for(a; a<n; a++)
    {
        if(a%2==0)
            pro(a,p);
    }
}
void pro(int a,int *p)
{
    *p=*p*a;
}
int main()
{
    int n;
    scanf("%d",&n);

    int product=1;

    funcEven(5,n,&product);


    printf("%d",product);
    return 0;
}



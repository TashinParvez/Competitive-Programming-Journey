#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long int a,b,c;

    for(int i=1; i<=t; i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a>b && a>c)
        {
            if(b>=c)
                printf("%d",b);
            else
                printf("%d",c);
        }
        else if(b>a && b>c)
        {
            if(a>=c)
                printf("%d",a);
            else
                printf("%d",c);
        }
        else if(c>b && c>a)
        {
            if(b>=a)
                printf("%d\n",b);
            else
                printf("%d",a);
        }
    }


    return 0;
}


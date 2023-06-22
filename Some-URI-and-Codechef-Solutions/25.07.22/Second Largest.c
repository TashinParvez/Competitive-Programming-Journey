#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long int a,b,c;

    for(int i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a>=b && a>=c)
        {
            if(b>=c)
                printf("%d\n",b);
            else
                printf("%d\n",c);
        }
        else if(b>=a && b>=c)
        {
            if(a>=c)
                printf("%d\n",a);
            else
                printf("%d\n",c);
        }
        else
        {
            if(b>=a)
                printf("%d\n",b);
            else
                printf("%d\n",a);
        }
    }


    return 0;
}


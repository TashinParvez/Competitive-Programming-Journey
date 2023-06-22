#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c,d;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>b)
        {

            if(c>d)
                printf("%d\n",a+c);
            else
                printf("%d\n",a+d);
        }
        else
        {
            if(c>d)
                printf("%d\n",b+c);
            else
                printf("%d\n",b+d);

        }

    }

    return 0;
}


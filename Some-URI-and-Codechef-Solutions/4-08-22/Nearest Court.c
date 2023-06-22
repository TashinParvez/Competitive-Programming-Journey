#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,y;

    for(int i =1; i<=t; i++)
    {
        int d;
        scanf("%d%d",&x,&y);

        if(x>y)
        {
            d=x-y;
            d=d/2;
            x= x-(y+d);
            printf("%d\n",x);
        }
        else
        {
            d=y-x;
            d=d/2;
            y= y-(x+d);
            printf("%d\n",y);

        }
    }

    return 0;
}


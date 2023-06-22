#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(y<x)
            printf("%d\n",x-y);
        else if(y>x)
            printf("%d\n",y-x);
        else
            printf("0\n");
    }

    return 0;
}


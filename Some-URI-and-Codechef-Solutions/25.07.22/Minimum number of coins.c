#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,count,remain;

    for(int i =1; i<=t; i++)
    {
        count=0;
        remain=0;
        scanf("%d",&x);
        count=x/10;
        remain=(x%10)/5;
        count += remain;

        if((x%10)%5==0)
            printf("%d\n",count);
        else
            printf("-1\n");


    }

    return 0;
}


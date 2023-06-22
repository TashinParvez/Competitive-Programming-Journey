#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a+c==180 && b+d==180)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}


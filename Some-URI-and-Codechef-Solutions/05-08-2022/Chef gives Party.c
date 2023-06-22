#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n,x,k;
        scanf("%d%d%d",&n,&x,&k);

        n=n*x;
        if(n>k)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}


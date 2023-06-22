#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int n;
    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);
        printf("Case %d:",i);
        for(int i = 1; i<=n; i++)
        {
            if(n%i==0)
                printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}


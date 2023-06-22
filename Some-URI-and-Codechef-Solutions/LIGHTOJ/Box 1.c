#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int n;
    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i==t)
            break;
        printf("\n");
    }
    return 0;
}


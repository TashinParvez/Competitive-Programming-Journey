#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=2;

    for(n; n>0; n--)
    {
        p=2;
        for(int i=1; i<=n; i++)
        {
            printf("%d ",p);
            p+=2;
        }
        printf("\n");
    }

    return 0;
}


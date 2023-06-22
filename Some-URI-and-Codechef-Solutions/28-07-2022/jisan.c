#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        for(int k=n-1; k>=1; k--)
        {
            if(k<=i)
                printf("%d",k);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

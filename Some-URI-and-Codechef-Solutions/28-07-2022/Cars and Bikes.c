#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;

    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);
        n=n%4;

        if(n/2 >=1)
            printf("Yes\n");
        else
        {
            printf("No\n");
        }
    }
    return 0;
}


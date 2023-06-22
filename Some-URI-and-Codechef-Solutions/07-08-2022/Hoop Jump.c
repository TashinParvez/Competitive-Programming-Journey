#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);

        printf("%d\n",n/2+1);
    }

    return 0;
}


#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%lld",&n);
        int even=n/2;
        int odd=n-even;
        printf("%lld\n",even*odd*2);
    }
    return 0;
}


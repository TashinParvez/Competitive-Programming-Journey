#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        long long int n;  // balls
        int k; // boxs
        scanf("%lld%d", &n, &k);

        if((k*(k+1))/2 <= n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

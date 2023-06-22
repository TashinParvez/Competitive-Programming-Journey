#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int n;
        n=(x/25)+1;
        if(x%25==0)
            n--;

        printf("%d\n",n);
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n,l,x;
        scanf("%d%d%d",&n,&l,&x);
        n=n-l;
        if(n>l)
            n=l;

        printf("%d\n",n*x);
    }

    return 0;
}


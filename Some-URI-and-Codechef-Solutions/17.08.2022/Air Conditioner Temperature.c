#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        if(a<=b && c<=b)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}


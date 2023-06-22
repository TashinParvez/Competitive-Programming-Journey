#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int a,b,c,d;
        scanf("%d %d%d%d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)
            printf("IN\n");
        else
            printf("OUT\n");
    }


    return 0;
}


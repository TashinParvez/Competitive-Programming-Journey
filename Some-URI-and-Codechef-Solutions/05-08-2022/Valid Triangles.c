#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)>180 || (a+b+c)<180 || a==0 || b==0 || c==0)
            printf("NO\n");
        else if((a+b+c)==180)
            printf("YES\n");
    }

    return 0;
}


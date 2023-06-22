#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);

        printf("%d\n",x*10+90*y);
    }

    return 0;
}

